/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:14:48 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 03:29:38 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 0x7A;
	while (c >= 0x61)
	{
		write(1, &c, 1);
		c--;
	}
}

/*
int   main(void)
{
        ft_print_reverse_alphabet();
        return (0); 
}
*/