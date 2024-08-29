/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:55:32 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/18 16:28:30 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void CheckSpaces(char *str, int index)
{
	if(str[index] == '0')
	
	{
	}
    if (str[index] == ' ' && str[index + 1] == ' ') 
    {
        //printf("Error: Extra spaces are not allowed.\n");
        return;
    } 
    else 
    {
        CheckSpaces(str, index + 1); // Recursion on the next character
    }
}

int main(int argc, char *argv[]) {

    if (argc != 2) 
    {
        //printf("Error: Please provide exactly one argument.\n");
    }
	CheckSpaces(argv[1], 0);


    return (0);
}
