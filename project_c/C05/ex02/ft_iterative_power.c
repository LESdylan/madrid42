/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 23:39:46 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/29 23:39:52 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i", ft_iterative_power(3, 4 ));
}
*/
