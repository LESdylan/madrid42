#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>  // For open() and O_RDONLY

#define MAX_STR_SIZE 128  // Adjust size as needed

char *ft_getval(int fd) {
    int i = 0;
    char c[1];
    char *str = malloc(MAX_STR_SIZE);  // Allocate memory for the string
    if (!str) {
        perror("malloc");
        exit(1);  // Exit if memory allocation fails
    }

    // Read the first character into c
    if (read(fd, c, 1) <= 0) {
        free(str);
        return NULL;  // Handle read errors or end-of-file
    }

    // Read characters until a newline or end-of-file is encountered
    while (*c != '\n' && c[0] != '\0') {
        if (i < MAX_STR_SIZE - 1) {  // Prevent buffer overflow
            str[i++] = c[0];
        }
        if (read(fd, c, 1) <= 0) break;  // Handle read errors or end-of-file
    }
    str[i] = '\0';  // Null-terminate the string

    return str;
}

int main(void) {
    int fd = open("text", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    char *val = ft_getval(fd);
    if (val) {
        printf("Value read from file: %s\n", val);
        free(val);  // Free allocated memory
    } else {
        printf("Failed to read value.\n");
    }
    
    close(fd);
    return 0;
}
