/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:34:19 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 21:34:23 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Checks if a string contains only uppercase letters.
 *
 * Returns 1 if `str` contains only UC letters or is empty, otherwise 0.
 *
 * @param str The string to check.
 * @return 1 if only uppercase letters or empty, 0 otherwise.
 */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
//[X]CHECKED
int main(void) {
    char *str1 = "helloworld";
    char *str2 = "HELLOWORLD";
    char *str3 = "";
    char *str4 = "helloworld123";
    printf("Is the string '%s' uppercase? %d\n", 
    str1, ft_str_is_uppercase(str1));
    printf("Is the string '%s' uppercase? %d\n", 
    str2, ft_str_is_uppercase(str2));
    printf("Is the string '%s' uppercase? %d\n", 
    str3, ft_str_is_uppercase(str3));
    printf("Is the string '%s' uppercase? %d\n", 
    str4, ft_str_is_uppercase(str4));
}
*/