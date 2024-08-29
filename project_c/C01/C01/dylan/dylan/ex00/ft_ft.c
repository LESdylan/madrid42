/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:34:35 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/15 20:04:05 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/**
 * PURPOSE : Change the value of the pointer
 * @param nbr we reference the pointer that will be modified.
 * @return change the value.
 */
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int		main(void)
{
	int		nbr1 = 50;
	int 	*nbr = &nbr1;
	//int **nbr2 = & nbr;
	//int ***nbr3 = &nbr2;
	printf("nbr is %d\n", *nbr);	// output the local variable
	ft_ft(nbr);
	printf("nbr is %d\n", *nbr); 	// dereference nbr to print the value
	return (0);
}
*/