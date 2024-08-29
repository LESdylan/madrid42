#include <unistd.h> // For write
#include "ft.h"     // Assuming ft_strlen is defined here
int    ft_strlen(const char *str);

void    ft_putstr(const char *str)
{
    write(1, str, ft_strlen(str)); // Writes the string to stdout
}
/*
int main()
{
    char *names = "dylan";
    ft_putchar(names); // Prints "dylan" to stdout
}
*/