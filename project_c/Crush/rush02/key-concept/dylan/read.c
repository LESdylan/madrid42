/**
 * read the specified amount of bytes into the memory function.
 * cnt : lenght of the buffer
 * buf : buffer to read data from
 * fd : file descriptor of the file from which data is to be read.
 
*/

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
 
int main(void)
{
    int fd, sz;
    char* c = (char*)calloc(100, sizeof(char));
 
    fd = open("infor.txt", O_RDONLY);
    if (fd < 0) {
        perror("r1");
        exit(1);
    }
 
    sz = read(fd, c, 10);
    printf("called read(% d, c, 10). returned that"
           " %d bytes were read.\n",
           fd, sz);
    c[sz] = '\0';
    printf("Those bytes are as follows: %s\n", c);
 
    return 0;
}
