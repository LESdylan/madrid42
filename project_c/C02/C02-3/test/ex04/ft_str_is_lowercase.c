/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:32:54 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 21:32:58 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Checks if a string contains only lowercase alphabetic characters.
 *
 * This function returns 1 if all characters in the string 
 * `str` are lowercase letters (a-z)
 * or if the string is empty. Otherwise, it returns 0.
 *
 * @param str A pointer to the null-terminated string to be checked.
 * @return 1 || 0.
 */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
//CHECKED
int main(void) {
    char *str1 = "helloworld";
    char *str2 = "HelloWorld";
    char *str3 = "";
    char *str4 = "helloworld123";
    printf("Is the string '%s' lowercase? %d\n", 
    str1, ft_str_is_lowercase(str1));
    printf("Is the string '%s' lowercase? %d\n", 
    str2, ft_str_is_lowercase(str2));
    printf("Is the string '%s' lowercase? %d\n", 
    str3, ft_str_is_lowercase(str3));
    printf("Is the string '%s' lowercase? %d\n", 
    str4, ft_str_is_lowercase(str4));
}
*/