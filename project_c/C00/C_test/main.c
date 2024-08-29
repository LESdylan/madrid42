/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:02:29 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/14 20:57:40 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/**
 * loop trough an  array.
 */
void    ft_putchar(char d)
{
        write(1, &d ,1);
}
int     main(void)
{
	char	a;
	int	n;
       	int	i;	
	int	divider;
	int 	array[10];
	int	nb;

	n = -1200;
	nb = n;
	i = 0;
	divider = 1;
	/*
	while(n > 0)
	{
		array[i] = (n % 10);
		n/=10;	
		i++;
	}
*/
/*
	for(int j = i - 1; j >= 0; j--)
		printf("%d", array[j]);
*/
	if(nb < 0)
	{
		nb *= -1;
		printf("%d", nb);
		while (nb / divider > 10)
        {
                divider *= 10;
        }

        while (divider > 0)
        {
                a = (n / divider) % 10 + '0';
                array[i++] = a;
                divider /= 10;
        }

	} 
	else	

	while (nb / divider > 10)
	{
		divider *= 10;
	}
	while(divider > 0)
	{
		a = (n / divider) % 10 + '0';
		array[i++] = a;
		divider /= 10;
	}
	
}
     
