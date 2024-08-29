/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 06:56:50 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 07:05:19 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	char	*p;

	p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
/*
int main(void) {
    char str1[50] = "Hello, ";  // Ensure enough space for concatenation
    char str2[] = "world";

    ft_strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}
*/
