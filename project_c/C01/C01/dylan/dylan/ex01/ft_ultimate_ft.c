/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:51:49 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/21 13:59:49 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
 * show the behavior of deep pointer.
 * @param n input the pointer which you want to change the value.
 * @return dereference and hold the new value
 */

void	ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
}
/*
int     main(void)
{
    int     ptr = 50;
    int     *ptr1 = &ptr;
    int     **ptr2= &ptr1; 
    int     ***ptr3 = &ptr2; 
    int     ****ptr4 = &ptr3;
    int     *****ptr5 = &ptr4; 
    int     ******ptr6 = &ptr5;
    int     *******ptr7 = &ptr6;
    int     ********ptr8 = &ptr7;
    int     *********ptr9 = &ptr8; 
    printf("value of ptr before modification = %d\n", *********ptr9);
    ft_ultimate_ft(ptr9);
    
    printf("value of n after modification = %d\n", *********ptr9);
    printf("value of ptr verif modification = %d\n", *****ptr5);
    return (0);
}
*/
/**
 * key concept : shared memory addrss : 
 * all the pointers in this chain share the same memory address.  
 */