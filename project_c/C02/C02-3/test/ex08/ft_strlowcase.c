/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:59:49 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 22:01:17 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Converts all uppercase letters in a string to lowercase.
 *
 * Modifies the string `str` by converting all UC letters to LC.
 * Returns a pointer to the modified string.
 *
 * @param str The string to convert to lowercase.
 * @return A pointer to the modified string.
 */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}
/*
// CHECKED
int	main(void)
{
    char str1[] = "HELLOWORLD";
    char str2[] = "HelloWorld";
    char str3[] = "";
    char str4[] = "12345ABC";    
    printf("Lowercase string: '%s'\n", ft_strlowcase(str1));
    printf("Lowercase string: '%s'\n", ft_strlowcase(str2));
    printf("Lowercase string: '%s'\n", ft_strlowcase(str3));
    printf("Lowercase string: '%s'\n", ft_strlowcase(str4));
}
*/