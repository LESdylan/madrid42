/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 06:53:25 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 07:05:14 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int main(void) {
    char *str = "helloo";
    char *str1 = "healdo";
    printf("The comparison result is: %d\n", ft_strncmp(str, str1, 3));
    return 0;
}
*/
