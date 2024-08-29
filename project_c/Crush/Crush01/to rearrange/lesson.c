#include <stdio.h>
// to understand the concept of argv / argc.
int     main(int argc, char *argv[])
{
    int     i;
    
    i = 0;
    while (i < argc)
    {
        printf("argumento %d. %s \n", i, argv[i]);
        i++;
    }
    printf("argc = %d \n", argc);
    printf("argv[argc] = %s \n", argv[argc]);
    return 0;
}

