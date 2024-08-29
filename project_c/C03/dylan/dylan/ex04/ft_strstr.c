/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:03:07 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/29 12:15:02 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * the strstr() function finds the first occurence
 * of the substring needle in the string hyastack. 
 * The terminating null bytes (\0)
 * are not compared
 * @param   str, it's a pointer that holds the value of a string.
 * @param   to_find, it's a pointer that holds the string of the value searched
 * @return pointer to the beginnig of the located substring, or NULL
 * if the substring is not found
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*copy;
	char	*copy2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		copy = str;
		copy2 = to_find;
		while (*copy && *copy2 && *copy == *copy2)
		{
			copy++;
			copy2++;
		}
		if (!*copy2)
			return (str);
		str++;
	}
	return (0);
}

/*
int main(void) {
    char *str = "dfdggddfg";
    char *substr = "";
    char *result = ft_strstr(str, substr);
    if (result)
    printf("%s", result);
	printf("\n%s",strstr(str, substr));
    return 0;
}
*/