/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:53:02 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 02:44:05 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		write(1, &d, 1);
		d++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/