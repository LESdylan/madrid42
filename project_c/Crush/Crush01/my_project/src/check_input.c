/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uno.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:49:48 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/18 22:49:53 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * A brief description. It's to validate an input
 * @param argc verify input
 * @param argv which is a pointer toward a multidimensional array to handle the character
 * @param input which is used to check and keep the value of the user.
 * @return booleann value.
 */
int validate_input(int argc, char **argv, int *input)
{
    int i;

    if (argc != 2)
        return 0;
    i = 0;

    while(i < 16)
    {
        if(argv[1][i * 2] < '1' || argv[1][i * 2] > '4')        /*first : ASCII Value Comparison -> ensure that only four digit are in the range of action */

            return 0;
        input[i] = argv[1][i * 2] - 48;        //character to integer conversion -> the number 48 is here to convert to the equivalent numeric

        i++;
        if (argv[1][(i * 2) -1] != ' ' && i != 16) // check if the previous character is not a space, ensure that after each digit, there is a white space. 
            return 0;
    }
    return 1; // Corrected the missing semicolon here
}

int main(int argc, char **argv)
{
    int input[16];
    if (validate_input(argc, argv, input))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}