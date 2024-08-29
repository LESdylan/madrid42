/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:11:05 by jelopez-          #+#    #+#             */
/*   Updated: 2024/08/11 17:11:35 by jelopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ft_conditions(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1) || (a == 1 && b == x))
		ft_putchar('o');
	else if ((a == y && b == x) || (a == y && b == 1))
		ft_putchar('o');
	else if (a == 1 || a == y)
		ft_putchar('-');
	else if (b == 1 || b == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush00(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Has introducido un numero menor a 1 en \'x\' o \'y\'", 50);
		return ;
	}
	while (a <= y)
	{
		while (b <= x)
		{
			ft_conditions(a, b, x, y);
			b++;
		}
		ft_putchar('\n');
		a++;
		b = 1;
	}
}
