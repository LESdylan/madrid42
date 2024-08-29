/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:34:18 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/21 15:36:04 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
/**
 * to display the length of the string
 * @param str derefe the value hold by the pointer and write it down.
 * @return any
 */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
    char arr[] = "hello world!";
    ft_strlen(arr); // print the length of the string;
    return (0);
}
*/
