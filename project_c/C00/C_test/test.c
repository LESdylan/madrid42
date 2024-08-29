/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:27:00 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/14 22:51:01 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putnbr_fd(int n, int fd)
{
	int	ln;
	int 	divider;
	char	c;

	if(fd < 0)
		return;
	ln = n;
	if(ln < 0)
	{
		if(!write(fd, "-", 1))
			return;
		ln = ln * -1;
	}
	divider = 1;
	while (divider * 10 <= ln)
		divider *= 10;
	while(divider)
	{
		c = ln / divider + '0';
	       if(!write(fd, &c, 1))
		       return;
		ln = ln / divider;
	 divider /= 10;	
	}
}

int	main()
{
	ft_putnbr_fd(500, 1000);
	return (0);
}
