/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:55:26 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/21 14:57:28 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
 * to swap the values of two distinct variables
 * @param a include any value into the int flow
 * @param b include any value into the int flow
 * @return nothing
 */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int     main(void)
{
    int x = 5;
    int y = 10;
    printf("Before the swap, x : %d, y:  %d\n", x, y);
    ft_swap(&x, &y); //pass the addres of x and y;
    printf("After the swap, x : %d, y : %d\n", x, y);
    return (0);
}*/