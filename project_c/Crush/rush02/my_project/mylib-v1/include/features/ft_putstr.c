/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:05:01 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/25 18:05:04 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_putstr - Writes a string to the standard output.
 *
 * @str: The string to be written. It must be a null-terminated string.
 *
 * Description:
 * This function takes a string `str` as input and writes each character of the string 
 * to the standard output using the `write` system call. The function continues to write 
 * characters one by one until it encounters the null terminator (`\0`) which signifies 
 * the end of the string.
 *
 * Example:
 * If `str` is "Hello, World!", the function will output "Hello, World!" to the console.
 *
 * Note:
 * - This function assumes that the input string is properly null-terminated.
 * - It uses the `write` system call to output each character to file descriptor 1 (stdout).
 */

/*
void	ft_putstr(const char *str)
{
    // Loop through each character of the string until the null terminator is encountered
    while (*str)
	    write(1, str++, 1);  // Write the current character to stdout and move to the next one
}
*/