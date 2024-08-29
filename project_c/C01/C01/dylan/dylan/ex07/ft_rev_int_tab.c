/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:08:17 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/22 16:46:19 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/**
 * to reverse and display the reverse
 * @param tab dereference the pointer and change
 * @param size apply the supposed length of your string.
 * @return any
 * @example int [1,2,3,4,5,6] -> int[]
 */
/*void print(int *arr, int size)
{
    int     i;
    i = 0;
    while(i < size)
    {
        printf("\t%d", arr[i]);
        i++;
    }
    printf("\n");
}*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	*ptr_start;
	int	*ptr_end;
	int	i;

	i = 0;
	ptr_start = tab;
	ptr_end = tab + (size - 1);
	while (ptr_start < ptr_end)
	{
		temp = *ptr_start;
		*ptr_start = *ptr_end;
		*ptr_end = temp;
		ptr_start++;
		ptr_end--;
	}
}
/*
int     main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array \t");
    print(arr, size);

    //Reverse the array in place using ft_rev_int_tab.
    ft_rev_int_tab(arr, size);
    printf("reversed array \t");
    print(arr, size);

    return 0;
}
*/
/*
 printf("\n reversed array");
    i = 0;
    while(i < size)
    {
        printf(",%d", tab[i]);//?
        i++;
    }
*/
/*version 1.0*/
/*int arr[6] = {1, 2, 3, 4, 5, 6}; // Initialize the array
    int temp;
    int i = 0;
    int j = 5; // Corrected starting index
    
    // Print the original array
    printf("Original array: ");
    while(i < 6) // Loop condition based on array length
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    
    // Reset i to 0 for reversal
    i = 0;
    // Reverse the array
    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // Print the reversed array
    printf("Reversed array: ");
    int x = 0;
    while(x < 6) // Loop condition based on array length
    {
        printf("%d ", arr[x]);
        x++;
}
*/
/*version 2.0*/
