#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define MAX_STR_SIZE 128  // Adjust size as needed

// Define the t_list structure
typedef struct s_list {
    int nb;   // Numeric value
    char *val; // Corresponding word representation
} t_list;

// Function to print a string to stdout
void ft_putstr(const char *str) {
    while (*str) {
        write(1, str++, 1);
    }
}

// Function to print the number in words
void ft_print(int n, t_list *tab, int *first) {
    int i;
    int found;
     // verify the condition
    if (n == 0) {
        ft_putstr("zero"); //verify th
        return;
    }

    // Print thousands
    if (n >= 1000) {
        int thousands = n / 1000;
        n %= 1000;
        ft_print(thousands, tab, first);
        ft_putstr(" thousand ");
    }

    // Print hundreds
    if (n >= 100) {
        int hundreds = n / 100;
        n %= 100;
        ft_print(hundreds, tab, first);
        ft_putstr(" hundred ");
    }

    // Print tens
    if (n >= 20) {
        int tens = (n / 10) * 10;
        n %= 10;
        found = 0;
        for (i = 0; tab[i].nb != 0; i++) {
            if (tab[i].nb == tens) {
                ft_putstr(tab[i].val);
                found = 1;
                break;
            }
        }
        if (!found) {
            ft_putstr("unknown_tens");  // Handle unknown tens case
        }
        if (n > 0) {
            ft_putstr(" ");
        }
    }

    // Print units (1 to 19)
    if (n > 0 && n < 20) {
        found = 0;
        for (i = 0; tab[i].nb != 0; i++) {
            if (tab[i].nb == n) {
                ft_putstr(tab[i].val);
                found = 1;
                break;
            }
        }
        if (!found) {
            ft_putstr("unknown_units");  // Handle unknown units case
        }
    }
}

// Main function to test ft_print
int main(void) {
    t_list tab[] = {
        { 1, "one" },
        { 2, "two" },
        {4, "four"},
        { 10, "ten" },
        { 20, "twenty" },
        { 30, "thirty" },
        { 40, "forty" },
        { 50, "fifty" },
        { 60, "sixty" },
        { 70, "seventy" },
        { 80, "eighty" },
        { 90, "ninety" },
        { 100, "hundred" },
        { 1000, "thousand" },
        { 0, NULL }  // End marker
    };
    int first = 1;
    ft_print(1234, tab, &first);  // Expected output: "one thousand two hundred thirty four"
    return 0;
}
