/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 07:00:37 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/29 05:36:06 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	char			*p;
	unsigned int	i;

	i = 0;
	p = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (p);
}
/*
int main(void) {
    char *str1 = (char *)malloc(50 * sizeof(char));
    strcpy(str1, "Hello, ");
    char *str2 = "world";
    unsigned int size = 4;
    ft_strncat(str1, str2, size);
    printf("Concatenated String: %s\n", str1);
    free(str1);
    return 0;
}
*/
