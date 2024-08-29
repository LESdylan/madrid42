Parameters

    fd: file descriptor of the file from which data is to be read.
    buf: buffer to read data from
    cnt: length of the buffer

Return Value

    return Number of bytes read on success
    return 0 on reaching the end of file
    return -1 on error
    return -1 on signal interrupt

Important Points

    - buf needs to point to a valid memory location with a length not smaller than the specified size because of overflow.
    
    - fd should be a valid file descriptor returned from open() to perform the read operation because if fd is NULL then the read should generate an error.
    
    - cnt is the requested number of bytes read, while the return value is the actual number of bytes read. Also, some times read system call should read fewer bytes than cnt.


Common File Descriptors:

    0: Standard Input (stdin)
        This file descriptor is used for reading input (e.g., from the keyboard).
    1: Standard Output (stdout)
        This file descriptor is used for writing output (e.g., to the console or terminal).
    2: Standard Error (stderr)
        This file descriptor is used for writing error messages (e.g., to the console or terminal).

These three file descriptors are always open by default in a C program, which is why they have these specific numbers.


Additional File Descriptors:

    3 and Above:
        - Any file descriptor returned by open that is 3 or greater corresponds to a file that was opened successfully by the open function.
        
        - The number 3 is usually the first available file descriptor for newly opened files since 0, 1, and 2 are typically taken by stdin, stdout, and stderr.



- https://www.geeksforgeeks.org/typedef-in-c/
- https://stackoverflow.com/questions/62301177/show-tab-struct-programming-c