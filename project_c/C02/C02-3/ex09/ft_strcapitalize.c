/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:10:06 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/23 21:50:42 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Capitalizes the first letter of each word in a string.
 *
 * Converts the first letter of each word in the string 
 * `str` to uppercase and 
 * all other letters to lowercase. 
 * Words are defined as sequences of alphabetic characters 
 * separated by non-alphabetic characters. 
 * The function modifies the string in place 
 * and returns a pointer to the modified string.
 *
 * @param str The string to capitalize.
 * @return A pointer to the modified string.
 */
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = -1;
	new_word = 1;
	while (str[++i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z')
			&& (str[i] < '0' || str[i] > '9'))
			new_word = 1;
		else if (new_word)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
			new_word = 0;
		}
		else
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + ('a' - 'A');
	}
	return (str);
}
/*
//CHECKED
int main(void)
{
    char str1[] = "hello world";
    char str2[] = "   this is a Test   ";
    char str3[] = "  mixedCASE String ";
    char str4[] = 
    "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";  
    printf("Capitalized string: '%s'\n", ft_strcapitalize(str1));
    printf("Capitalized string: '%s'\n", ft_strcapitalize(str2));
    printf("Capitalized string: '%s'\n", ft_strcapitalize(str3));
    printf("Capitalized string: '%s'\n", ft_strcapitalize(str4));
}
*/
