/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:36:18 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 23:40:29 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Copies up to `size - 1` characters from `src` to `dest`, 
 * null-terminating the result.
 *
 * Copies up to `size - 1` characters from the string 
 * `src` to `dest` and always null-terminates
 * `dest` as long as `size` is greater than 0. 
 * Returns the total length of `src`, which is the 
 * length of the string it tried to create 
 * (not including the null terminator).
 *
 * @param dest A pointer to the destination buffer.
 * @param src A pointer to the source string.
 * @param size The size of the destination buffer.
 * @return The total length of the source string.
 */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
CHECKED
int     main(void)
{
    char dest[10];
    char *source = "Hello, World1";
    unsigned copied_length  = ft_strlcpy(dest, source, sizeof(dest));
    printf("copied string: %s\n", dest);
    printf("Length of source : %u\n", copied_length);
    return 0;
}
*/