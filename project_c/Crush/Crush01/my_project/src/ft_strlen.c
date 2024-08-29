
#include <stdio.h>
int    ft_strlen(const char *str)
{
    int     count;
    count = 0;
    while (str[count])
    {
        count++;
    }
    return count;
}
/*
int     main(void){
    const char *testString = "Hello World!";
    printf("length of string : %d\n", ft_strlen("testString fdf"));
    return 0 ;
}
*/