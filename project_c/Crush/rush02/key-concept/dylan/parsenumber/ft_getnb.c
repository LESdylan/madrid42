#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define MAX_STR_SIZE 34

char *ft_getnb(int fd) {
    int i = 0;
    int n = 35; // test
    char c[1];
    char *str = malloc(MAX_STR_SIZE);
    if (!str) {
        perror("malloc");
    exit(1);
    }

    ssize_t bytes_read = read(fd, c, 1);
    if (bytes_read < 0) {
        perror("read");
        free(str);
        exit(1);
    }

    // Skip newlines and other non-digit characters
    //while (c[0] == '\n' && (bytes_read = read(fd, c, 1)) > 0) {}

    // Read digits until a non-digit is found
    while (c[0] >= '0' && c[0] <= '9') {
        if (i < MAX_STR_SIZE - 1) {  // Prevent buffer overflow
            str[i++] = c[0];
        }
        if (read(fd, c, 1) <= 0) break;  // Check for end of file or read error
    }
    str[i] = '\0';

    return str;
}

int main(void) {
    int fd = open("testfile", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    char *number = ft_getnb(fd);
    if (number) {
        printf("Number read from file: %s\n", number);
        free(number);
    } else {
        printf("Failed to read number.\n");
    }
    close(fd);
    return 0;
}
