
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define MAX_ENTRIES 200
#define MAX_STR_SIZE 128

typedef struct s_list {
    int nb;
    char *val;
} t_list;

// Function prototypes

char *ft_strdup(const char *src);
int ft_atoi(const char *str);


// Reads digits from file until a non-digit character is encountered
char *ft_getnb(int fd) {
    int i = 0;
    char c[1];
    char *str = malloc(MAX_STR_SIZE);
    if (!str) {
        perror("Failed to allocate memory");
        exit(1);
    }
    
    read(fd, c, 1);
	// skip newlines
    while (c[0] == '\n')
        read(fd, c, 1);
    
	// read digit until a non-digit is found
    while (c[0] >= '0' && c[0] <= '9') {
        str[i++] = c[0];
        read(fd, c, 1);
    }
    str[i] = '\0';
    return str;
}

// Reads string from file until a newline or end-of-file is reached
char *ft_getval(int fd, char *c) {
    int i = 0;
    char *str = malloc(MAX_STR_SIZE);
    if (!str) {
        perror("Failed to allocate memory");
        exit(1);
    }
    while (c[0] != '\n' && c[0] != '\0') {
        str[i++] = c[0];
        if (read(fd, c, 1) <= 0) break; // Read the next character, handle EOF
    }
    str[i] = '\0';
    return str;
}

// Processes the dictionary file and creates an array of numbers and their corresponding values
t_list *process(const char *file) {
    int i;
    int fd;
    char c[1];
    t_list *tab;
    char *tmp;

    // Open the file for reading
    fd = open(file, O_RDONLY);
    if (fd == -1)
    {
        perror("Failed to open dictionary file");
        return NULL;
    }

    tab = malloc(sizeof(t_list) * MAX_ENTRIES);
    if (!tab) {
        perror("Failed to allocate memory for tab");
        close(fd);
        return NULL;
    }

    i = 0;
    while (i < MAX_ENTRIES && read(fd, c, 1) > 0) {
        lseek(fd, -1, SEEK_CUR);  // Rewind the character for ft_getnb
        char *nb_str = ft_getnb(fd);
        tab[i].nb = ft_atoi(nb_str);
        free(nb_str);
        
        read(fd, c, 1);
        if (c[0] == ':') 
            read(fd, c, 1);
        while (c[0] == ' ') 
            read(fd, c, 1);
        
        tmp = ft_getval(fd, c);
        tab[i].val = ft_strdup(tmp);
        free(tmp);
        i++;
    }
    close(fd);
    return tab;
}

// Creates a duplicate string
char *ft_strdup(const char *src) {
    int i = 0;
    int len = 0;
    char *dst;
    
    // Calculate length of the source string
    while (src[len] != '\0') len++;
    
    dst = malloc(len + 1);
    if (!dst) return NULL;
    
    // Copy characters from src to dst
    while (i < len) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

// Converts ASCII string to integer
int ft_atoi(const char *str) {
    int res = 0;
    int negative = 1;

    // Skip whitespace characters
    while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r'))
        str++;
    
    if (*str == '-') {
        negative = -1;
        str++;
    }
    
    // Convert digits to integer
    while (*str && *str >= '0' && *str <= '9') {
        res = res * 10 + (*str - '0');
        str++;
    }
    return res * negative;
}

// Prints the string character by character
void ft_putstr(const char *str) {
    while (*str) write(1, str++, 1);
}

// Returns the decimal equivalent of a number
int getdec(int nb) {
    if (nb >= 90) return 90;
    else if (nb >= 80) return 80;
    else if (nb >= 70) return 70;
    else if (nb >= 60) return 60;
    else if (nb >= 50) return 50;
    else if (nb >= 40) return 40;
    else if (nb >= 30) return 30;
    else if (nb >= 20) return 20;
    else return nb;
}

// Returns the multiplication factor for a number
int getmult(int nb) {
    if (nb >= 1000000000) return 1000000000; // Billion
    else if (nb >= 1000000) return 1000000; // Million
    else if (nb >= 1000) return 1000; // Thousand
    else if (nb >= 100) return 100; // Hundred
    else return getdec(nb); // Default case
}

// Prints numbers using the dictionary
void ft_print(int n, t_list *tab, int *first) {
    int i;
    
    // Handle zero case
    if (n == 0) {
        ft_putstr("zero");
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
    
    // Print tens and ones
    if (n >= 20) {
        int tens = (n / 10) * 10;
        n %= 10;
        i = 0;
        while (tab[i].nb != tens) i++;
        ft_putstr(tab[i].val);
        if (n > 0) ft_putstr(" ");
    }
    
    // Print units
    if (n > 0 && n < 20) {
        i = 0;
        while (tab[i].nb != n) i++;
        ft_putstr(tab[i].val);
    }
}

// Frees the memory allocated for the tab array
void free_tab(t_list *tab) {
    if (tab) {
        for (int i = 0; i < MAX_ENTRIES && tab[i].val; i++) {
            free(tab[i].val);
        }
        free(tab);
    }
}

int main(int ac, char **av) {
    t_list *tab;
    int first = 1;

    // Check if the correct number of arguments is provided
    if (ac == 2) {
        // Validate input number
        int num = ft_atoi(av[1]);
        if (num < 0) {
            write(1, "Error\n", 6);
            return 0;
        }

        // Process the dictionary file
        tab = process("numbers.dict");
        if (tab) {
            // Print the number using the dictionary
            ft_print(num, tab, &first);

            // Free allocated memory
            free_tab(tab);
        } else {
            write(1, "Error loading dictionary\n", 25);
        }
    } else {
        write(1, "Usage: ./a.out <number>\n", 24);
    }
    return 0;
}
