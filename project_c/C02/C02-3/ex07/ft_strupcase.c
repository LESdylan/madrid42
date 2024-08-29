/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:54:22 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/29 02:08:21 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Converts all lowercase letters in a string to uppercase.
 *
 * Modifies the string `str` by converting all lowercase letters to uppercase.
 * The function returns a pointer to the modified string.
 *
 * @param str The string to convert to uppercase.
 * @return A pointer to the modified string.
 */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
/*
int	main(void)
{
    char str1[] = "helloworld";
    char str2[] = "HelloWorld";
    char str3[] = "";
    char str4[] = "12345abc";    
    printf("Uppercase string: '%s'\n", ft_strupcase(str1));
    printf("Uppercase string: '%s'\n", ft_strupcase(str2));
    printf("Uppercase string: '%s'\n", ft_strupcase(str3));
    printf("Uppercase string: '%s'\n", ft_strupcase(str4));
}
*/