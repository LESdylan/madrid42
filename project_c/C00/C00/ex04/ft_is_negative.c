/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:24:48 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/15 13:28:28 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ng;
	char	ps;

	ng = 'N';
	ps = 'P';
	if (n < 0)
		write(1, &ng, 1);
	else
		write(1, &ps, 1);
}

/*
int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(10);
	return (0);
	
}
*/