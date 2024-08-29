/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:17:09 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 19:31:59 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/**
 * @brief Checks if a string contains only numeric characters.
 *
 * This function returns 1 if all characters 
 * in the string `str` are digits (0-9) 
 * or if the string is empty. Otherwise, it returns 0.
 *
 * @param str A pointer to the null-terminated string to be checked.
 * @return 1 if the string contains only digits or is empty, 0 otherwise.
 */
int	ft_str_is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
// CHECKED
int	main(void)
{
    char *str1 = "1234567890";
    char *str2 = "12345abc67890";
    char *str3 = "";
    char *str4 = " 123456";
    printf("Is the string '%s' numeric? %d\n", str1, ft_str_is_numeric(str1));
    printf("Is the string '%s' numeric? %d\n", str2, ft_str_is_numeric(str2));
    printf("Is the string '%s' numeric? %d\n", str3, ft_str_is_numeric(str3));
    printf("Is the string '%s' numeric? %d\n", str4, ft_str_is_numeric(str4));
}
*/