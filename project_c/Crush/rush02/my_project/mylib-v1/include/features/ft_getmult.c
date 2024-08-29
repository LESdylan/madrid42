/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:02:44 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 15:34:59 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * determines if the number is larger or equal to the number inputed
 * @return return the same value of nb < 100 else return the value returned.
 * @example possible return values include
 * `10000000000000000` -> 1000000000000000
 * `1000` -> 1000
 * ...
 * getdec() that throw the code toward the function get_dec()
 */


#include "/home/dlesieur/projects_42/project_c/Crush/rush02/my_project/mylib-v1/include/ft.h"

int	getdec(unsigned int nb);
int	getmult(int nb)
{
	if (nb >= 1000000000)
		return 1000000000;
	else if (nb >= 1000000)
		return 1000000;
	else if (nb >= 1000)
		return 1000;
	else if (nb >= 100)
		return 100;
	else
		return getdec(nb);
}

int main() {
    long long int test_numbers[] = {123, 999, 1000, 999999, 1000000, 999999999, 1000000000, 1000000000000LL, 1000000000000000LL, 1000000000000000000LL, 1000000000000000000000LL, 1000000000000000000000000000LL, 1000000000000000000000000000000000000LL};
    
    for (long long int nb : test_numbers) {
        std::cout << "Input: " << nb << " -> Multiplier: " << getmult(nb) << std::endl;
    }
    
    return 0;
}
*