#include <limits.h> // For INT_MAX and INT_MIN
#include <stdio.h>

int ft_atoi(const char *str) {
    int res = 0;
    int negative = 1;
    while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r'))
        str++;
    if (*str == '-') {
        negative = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        int digit = *str - '0';
        // Check for overflow/underflow
        if (res > (INT_MAX - digit) / 10) {
            // Overflow or underflow detected
            return (negative == 1) ? INT_MAX : INT_MIN;
        }
        res = res * 10 + digit;
        str++;
    }
    return res * negative;
}

int main(void) {
    const char *num1 = "   -1234";
    const char *num2 = "42";
    const char *num3 = "+077";
    const char *num4 = "2147483648"; // Example of edges case

    printf("Converted '%s': %d\n", num1, ft_atoi(num1)); // Output: -1234
    printf("Converted '%s': %d\n", num2, ft_atoi(num2)); // Output: 42
    printf("Converted '%s': %d\n", num3, ft_atoi(num3)); // Output: 7
    printf("Converted '%s': %d\n", num4, ft_atoi(num4)); // Output: 2147483647 (overflow case)

    return 0;
}
