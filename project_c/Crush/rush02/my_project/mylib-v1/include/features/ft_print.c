/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:04:10 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 15:35:17 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 * ft_print - Recursively prints the English words for a given integer.
 *
 * @param n: The integer to be converted to words and printed.
 * @param tab: A table of `t_list` structures where each structure contains a number and its 
 *       corresponding word in English.
 * @param first: A pointer to an integer that can be used to indicate the first iteration or 
 *         to modify behavior (currently unused in this implementation).
 *
 * Description:
 * This function recursively breaks down an integer `n` and prints its English words 
 * representation. It handles numbers in the range of thousands, hundreds, tens, and 
 * units, printing the appropriate words. If `n` is zero, it prints "zero" and returns.
 *
 * The function assumes that the `tab` array contains mappings of numbers to their 
 * corresponding words, including multiples of ten for numbers greater than or equal to 20.
 *
 * Example:
 * Given an integer `n = 1234`, the function will print "one thousand two hundred thirty four".
 *
 * Note:
 * - The function uses recursion to break down numbers greater than 1000 and 100.
 * - It assumes that the `tab` array is correctly populated with the necessary mappings.
 */

void	ft_print(int n, t_list *tab, int *first)
{
	int	i;
	int	mult;
	if (n == 0)
	{
        	ft_putstr("zero");
		return;
	}
	if (n >= 1000)
	{
		int thousands = n / 1000;
		n %= 1000;
		ft_print(thousands, tab, first);
		ft_putstr(" thousand ");
	}
	if (n >= 100)
	{
		int hundreds = n / 100;
		n %= 100;
		ft_print(hundreds, tab, first);
		ft_putstr(" hundred ");
	}
	
	if (n >= 20)
	{
		int tens = (n / 10) * 10;
		n %= 10;
		for (i = 0; tab[i].nb != tens; i++);
		ft_putstr(tab[i].val);
		if (n > 0) ft_putstr(" ");
	}
	if (n > 0 && n < 20)
	{
        	for (i = 0; tab[i].nb != n; i++);
        	ft_putstr(tab[i].val);
	}
}

int main(void) {
    t_list tab[] = {
        { 1, "one" },
        { 2, "two" },
        { 10, "ten" },
        { 20, "twenty" },
        { 30, "thirty" },
        { 40, "forty" },
        { 50, "fifty" },
        { 60, "sixty" },
        { 70, "seventy" },
        { 80, "eighty" },
        { 90, "ninety" },
        { 100, "hundred" },
        { 1000, "thousand" },
        { 0, NULL }  // End marker
    };
    int first = 1;
    ft_print(1234, tab, &first);  // Expected output: "one thousand two hundred thirty four"
    return 0;
}
