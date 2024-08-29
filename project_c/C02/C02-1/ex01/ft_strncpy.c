/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:21:53 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/23 21:51:07 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Copies up to `n` characters from str src to the dest buffer.
 *
 * This function copies at most `n` characters 
 * from the string pointed to by `src` 
 * to the buffer pointed to by `dest`. 
 * If the length of `src` is less than `n`, 
 * the remainder of `dest` will be padded with null bytes (`\0`). 
 * If `src` is longer than `n` characters,
 * only the first `n` characters are copied, 
 * and no null terminator is added to `dest`. 
 * If `n` is greater than the length of `src`, the destination 
 * string will be null-terminated.
 *
 * @param dest A pointer to the destination buffer.
 * @param src A pointer to the null-terminated string to be copied.
 * @param n The maximum number of characters to be copied from `src`.
 * @return A pointer to the destination string `dest`.
 *
 * @note Ensure that the destination buffer is large enough 
 * to hold `n` characters to avoid buffer overflow. 
 * Also, be aware that `ft_strncpy` does not guarantee 
 * null-termination of the destination string if `src` is longer than `n`.
 *
 * @example
 * ```c
 * char src[] = "Hello, World!";
 * char dest[20];
 * ft_strncpy(dest, src, 5);
 * printf("%s\n", dest); // Output: Hello
 * ```
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
// CHECKED
int     main(void)
{
    char str[12] = "hello world!"; //allocate sufficient memory for str
    char dest[12];
    ft_strncpy(dest, str, 5);
    printf("the string of the functions : %s\n", dest);
    return (0);
}
*/