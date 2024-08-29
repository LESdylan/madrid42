/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getval.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:03:53 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 15:35:07 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 * ft_getval - Reads characters from a file descriptor until a newline or null terminator
 *             is encountered, and stores them into a dynamically allocated string.
 *
 * @param fd: The file descriptor from which to read characters.
 * @param c:  A pointer to a character buffer. This buffer should be initialized before calling 
 *      the function and should contain the first character to be included in the string.
 *
 * Return: A pointer to a dynamically allocated string containing the characters read 
 *         from the file descriptor. The string will be null-terminated. The caller is 
 *         responsible for freeing the allocated memory. If memory allocation fails, the 
 *         program will exit with a status of 1.
 *
 * Description:
 * This function reads characters from the file descriptor `fd` and appends them to a 
 * string until a newline character (`'\n'`) or a null terminator (`'\0'`) is encountered 
 * in the character buffer `c`. The string is dynamically allocated with a size defined 
 * by `MAX_STR_SIZE`. If memory allocation fails, the program exits with an error code. 
 * The function assumes that `c` contains a valid character and that `read(fd, c, 1)` 
 * successfully reads the next character from the file descriptor.
 *
 * Example:
 * char buffer[1];
 * read(fd, buffer, 1);
 * char *result = ft_getval(fd, buffer);
 * 
 * Note:
 * - The caller must ensure that `fd` is valid and `c` points to a valid character.
 * - The function does not check for buffer overruns; ensure that `MAX_STR_SIZE` is 
 *   large enough to hold the expected input.
 */

char *ft_getval(int fd, char *c)
{
	int i;
	char *str;

	i = 1;
	str = malloc(MAX_STR_SIZE);
	if (!str) 
		exit(1);
	while (c[0] != '\n' && c[0] != '\0')
	{
		str[i++] = c[0];
		read(fd, c, 1);
	}
	str[i] = '\0';
	return str;
}
