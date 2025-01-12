/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:51:12 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/15 14:03:18 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i ;
		while (++j <= 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + 48);
			write(1, " ", 1);
			ft_putchar((j / 10) + 48);
			ft_putchar((j % 10) + 48);
			if (i != 98)
				write(1, ", ", 2);
		}
	}
	return (0);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
