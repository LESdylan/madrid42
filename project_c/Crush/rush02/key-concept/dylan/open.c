// C program to illustrate
// open system call
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

extern int errrno;
/**
 * the file descriptor function is used to read the process inherent to the funciton so we can understand what happens.
 * @param void there is no parameter used for this.
 * @return an integer which is 0 by defalt
 * @note
 * we expect the process to output : 0, 1, 2 or 3 which is reserver for the first creation of a file.
 * -1 file descriptor used, -1 upon failure.
 */
int main(void)
{
    int file_descriptor;
    char *str = "infor.txt";

    // Open file with different flags
    file_descriptor = open(str, O_RDONLY);
    int fd_read = open(str, O_RDONLY);
    int fd_write = open(str, O_WRONLY);
    int fd_rw = open(str, O_RDWR);
    int fd_cr = open(str, O_WRONLY | O_CREAT, 0644);  // Create file if it doesn't exist
    int fd_pcr = open(str, O_WRONLY | O_CREAT | O_EXCL, 0644);  // Create exclusively
    int fd_append = open(str, O_WRONLY | O_APPEND); //it's used to write data at the end of the file
    int fd_async = open(str, O_WRONLY | O_ASYNC); // ??
    int fd_nonblock = open(str, O_WRONLY | O_NONBLOCK); // ??

    printf("fd = %d\n", fd_read);
    printf("fd = %d\n", file_descriptor);
    printf("fd = %d\n", fd_write);
    printf("fd = %d\n", fd_rw);
    printf("fd = %d\n", fd_cr);
    printf("fd = %d\n", fd_pcr);
    printf("fd = %d\n", fd_append);
    printf("fd = %d\n", fd_async);
    printf("fd = %d\n", fd_nonblock);
    if (file_descriptor == -1 || fd_read == -1 || fd_write == -1 || fd_rw == -1)
    {
        // Print the type of error
        printf("Error %d\n", errno);
        // Print program detail "Success or failure"
        perror("Program");
    }

    // Close opened file descriptors
    if (file_descriptor != -1) close(file_descriptor);
    if (fd_read != -1) close(fd_read);
    if (fd_write != -1) close(fd_write);
    if (fd_rw != -1) close(fd_rw);
    if (fd_cr != -1) close(fd_cr);
    if (fd_pcr != -1) close(fd_pcr);
    if (fd_append != -1) close(fd_append);
    if (fd_async != -1) close(fd_async);
    if (fd_nonblock != -1) close(fd_nonblock);

    return 0;
}