/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:06:27 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 15:35:25 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_strdup - Duplicates a string by allocating memory for a new copy.
 *
 * @param src: The source string to be duplicated. It must be a null-terminated string.
 *
 * Return: A pointer to the newly allocated string which is a duplicate of `src`. 
 *         If memory allocation fails, the function returns `NULL`.
 *
 * Description:
 * This function creates a duplicate of the given string `src`. It first calculates 
 * the length of `src`, then allocates sufficient memory to hold the duplicate string 
 * including the null terminator (`\0`). After successfully allocating memory, it copies 
 * the content of `src` into the newly allocated memory. Finally, it returns a pointer 
 * to the duplicated string.
 *
 * Example:
 * char *original = "Hello, World!";
 * char *copy = ft_strdup(original);
 * 
 * If memory allocation fails, `copy` will be `NULL`. Otherwise, `copy` will contain 
 * "Hello, World!".
 */
/
char	*ft_strdup(const char *src)
{
	int	i;
	int	len;
	char	*dst;
	
	len = 0;
	while (src[len] != '\0')
		len++;
	dst = malloc(len + 1);
	if (!dst)
		return NULL;
	for (i = 0; i < len; i++)
		dst[i] = src[i];
	dst[i] = '\0';
	return dst;
}
