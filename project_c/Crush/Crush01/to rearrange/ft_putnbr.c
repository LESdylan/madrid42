/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:18:44 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/17 22:41:11 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft.h"
void 	ft_putchar(char c);
void ft_putnbr(char nb)
{
	unsigned int	res;
	int	i;
	int	divider;
	int	a;
	res = 1;
	divider = 1;


	if(i < 0)
	{
		ft_putchar('-');
		res = -nb;
	}

	while(nb / divider > 10)
	{
		divider *= 10;
	}
	while(divider > 0)
	{
		a = nb / divider % 10 + '0';
	       	ft_putchar(a);	
		divider /= 10;
	}
}
