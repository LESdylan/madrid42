/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:23:59 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/21 15:29:18 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

/**
 * to display a character
 * @param str input the printable character of your choice
 * @return any
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * to display the string
 * @param str derefere the value hold by the pointer and write it.
 * @return any
 */

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
int    main(void)
{
    char *str = "Salut le monde";
    ft_putstr(str);
    return (0);
}
*/
