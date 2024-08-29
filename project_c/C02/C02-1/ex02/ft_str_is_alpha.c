/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:01:17 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 19:19:15 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Checks if a string contains only alphabetic characters.
 *
 * This function checks whether all characters in the string pointed to by `str`
 * are alphabetic letters (i.e., either uppercase or lowercase). If the string
 * is empty (i.e., the first character is `\0`), the function returns 1. 
 * The function returns 1 if all characters in the string are alphabetic; 
 * otherwise, it returns 0.
 *
 * @param str A pointer to the null-terminated string to be checked.
 * @return 1 if the string contains only alphabetic characters or is empty
 *
 * @example
 * ```c
 * char str1[] = "HelloWorld";
 * char str2[] = "Hello123";
 * char str3[] = "";
 * 
 * int result1 = ft_str_is_alpha(str1); // Output: 1
 * int result2 = ft_str_is_alpha(str2); // Output: 0
 * int result3 = ft_str_is_alpha(str3); // Output: 1
 * ```
 */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
//CHECKED
int	main(void)
{
	char *str1 = "helloworld";
	char *str2 = "hellfdsfd44654";
	char *str3 = "";
	char *str4 = " hellfdsfd44654";    
	printf("Is the string '%s' alphabetic? %d\n", str1, ft_str_is_alpha(str1));
	printf("Is the string '%s' alphabetic? %d\n", str2, ft_str_is_alpha(str2));
	printf("Is the string '%s' alphabetic? %d\n", str3, ft_str_is_alpha(str3));
	printf("Is the string '%s' alphabetic? %d\n", str4, ft_str_is_alpha(str4));
}
*/
/**
error:
incorrect logical condition: he condition if 
(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) 
checks if the current character is not an alphabetic character. 
If it isn't, the function returns 0.returning too early : 
If the loop completes without finding a non-alphabetic character, 
the function returns 1, 
indicating that all characters in the string are alphabetic.
missing return 0:
no output in `main, 
now with printf,we can see the logic of the functions.
 */
