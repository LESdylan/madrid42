/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:02:29 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 15:34:55 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * the function is used to identify the correct 10th place (fr 10 -> 90)
 * @return the largest multiple of ten n <= input
 * @param nb the input number 
 * @note this function is part of a larger program that is used to output the traduction in english 
 * @example 
 * if `nb` >= 90, the function return 90
 * if nb >= 20, the function returns 'nb' return 20;
 * if nb <= 20; nb return itself.
 */


int	getdec(unsigned int nb) // we have to declare the type as unsigned
{
	if (nb >= 90)
		return 90;
	else if (nb >= 80)
		return 80;
	else if (nb >= 70)
		return 70;
	else if (nb >= 60)
		return 60;
	else if (nb >= 50)
		return 50;
	else if (nb >= 40)
		return 40;
	else if (nb >= 30)
		return 30;
	else if (nb >= 20)
		return 20;
	else return nb;
}
