/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:44:59 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 21:50:50 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Checks if a string contains only printable characters.
 *
 * Returns 1 if all characters in `str` are printable 
 * (including space) or if the string is empty.
 * Otherwise, returns 0.
 *
 * @param str The string to check.
 * @return 1 if all characters are printable or empty, 0 otherwise.
 */
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((*str < 32 || *str > 126) || *str == '\0')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
//CHECKED
int main(void) {
    char str1[] = "hola";
    char str2[] = "HOLA";
    char str3[] = "";
    char str4[] = "'\n'!DFAd\fFDS~";
    
    printf("is printable ?\t%d\n", ft_str_is_printable(str1));
    printf("is printable ?\t%d\n", ft_str_is_printable(str2));
    printf("is printable ?\t%d\n", ft_str_is_printable(str3));
    printf("is printable ?\t%d\n", ft_str_is_printable(str4));
    return 0;
}
*/
/*
#include <stdio.h>int ft_str_is_printable(char *str) {
    int i = 0;    // If the string is empty, return 1
    if (str[i] == '\0')
        return 1;    // Check each character in the string
    while (str[i] != '\0') {
        // Check if the character is outside the printable range
        if (str[i] < 32 || str[i] > 126) {
            return 0;
        }
        i++;
    }    // If all characters are printable, return 1
    return 1;
}
*/
