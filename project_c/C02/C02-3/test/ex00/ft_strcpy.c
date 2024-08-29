/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:11:37 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 23:53:09 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/**
 * @brief Copies a string from the source to the destination.
 *
 * This function copies the null-terminated string pointed to by `src`
 * (including the null terminator) into the buffer pointed to by `dest`.
 * The destination buffer must be large enough to hold the contents of 
 * `src` including the terminating null byte (`\0`). If the buffers 
 * overlap, the behavior is undefined.
 *
 * @param dest A pointer to the destination buffer where to copy
 * @param src A pointer to the null-terminated string to be copied.
 * @return A pointer to the destination string `dest`.
 *
 * @note Ensure that the destination buffer has enough space to accommodate
 * the source string including the null terminator to avoid buffer overflow.
 *
 * @example
 * ```c
 * char src[] = "Hello, World!";
 * char dest[50];
 * ft_strcpy(dest, src);
 * printf("%s\n", dest); // Output: Hello, World!
 * ```
 */
char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 	
//CHECKED
int 	main(void)
{
	char str[] = "Hello world";
	char str1[] = "Hello world fshfshhfs 56151";
	char dest[12];
	ft_strcpy(dest, str);
	printf("The string copied by the function is: %s\n", dest);  
	ft_strcpy(dest, str1);
	printf("The string copied by the function is: %s\n", dest);  
	return (0);
}
*/
