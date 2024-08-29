/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:20:20 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 03:29:07 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	min_value(void)
{
	write(1, "-2147483648", 11);
	return ;
}

void	ft_putnbr(int nb)
{
	int		divider;
	char	a;

	divider = 1;
	if (nb == -2147483648)
	{
		min_value();
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb / divider > 9)
		divider *= 10;
	while (divider > 0)
	{
		a = nb / divider + '0';
		ft_putchar(a);
		nb = nb % divider;
		divider /= 10;
	}
}

/*
int	 main(void)
{
    ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2848);
    ft_putchar('\n');
    ft_putnbr(2647);
	ft_putchar('\n');
    ft_putnbr(-2848);
	ft_putchar('\n');
    ft_putnbr(42);	
    return (0);
}

*/