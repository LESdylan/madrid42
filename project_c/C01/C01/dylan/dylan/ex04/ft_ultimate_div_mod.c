/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:09:00 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/21 15:09:57 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
 * to access and modified from the local function with pointers
 * @param a dereference the value of pointers
 * @param b dereference the value of pointers
 * @return any
 */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int     main(void)
{
    int     *a;
    int     *b;
    int     c;
    int     d;
    c = 25;
    d = 50;
    a = &c;
    b = &d;
    ft_ultimate_div_mod(a, b);
    printf("the values of x is :%d, of y is %d \n", *a, *b);
    return (0);
}
*/
