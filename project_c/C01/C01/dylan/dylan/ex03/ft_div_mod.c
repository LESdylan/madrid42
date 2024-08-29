/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:01:28 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/21 15:02:07 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
 * to access and modify the value and hold it in new pointers
 * @param a include any value into the int flow
 * @param b include any value into the int flow
 * @param div declare a pointer that will hold the value
 * @param mod declare a pointer that will hold the value 
 * @return any
 */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void) {
    int mod = 1;
    int div;
    int x = 25;
    int y = 50;
    printf("%d\n",mod);
    ft_div_mod(112, 25, &mod, &div); // Pass addresses of x and y to ft_div_mod
    printf("%d\n",mod); 
    printf("After division and modulus operations:\n");
    printf("Dividend (x) = %d, Modulus (y) = %d\n", x, y);
    return 0;
}*/
