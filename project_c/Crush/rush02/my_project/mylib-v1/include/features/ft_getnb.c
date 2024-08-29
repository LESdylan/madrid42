/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:41:11 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/27 15:35:03 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcnt1.h>

/**
 * the function read from the file descriptor to extract a numeric string, which is expected to be a series
 * of digits representing a number.
 * This function is used  to read and convert a number from a file , 
 * typically when numbers are followed by new-lines or other non numeric characters
 * @param fd should refer to an  open  file where the numeric string is located.
 * @return pointer to a dynamically allocated string that contains the numeric character read from the file.
 * @return if fail return  exit(1). The function may not return meaningful result.
 */


char *ft_getnb(int fd) {
    int i = 0;
    char c[1];
    char *str = malloc(MAX_STR_SIZE);
    if (!str) 
        exit(1);
    
    read(fd, c, 1);
	// skip  newlines
    while (c[0] == '\n')
        read(fd, c, 1);
    
	// read digit until a non digit is found
    while (c[0] >= '0' && c[0] <= '9') {
        str[i++] = c[0];
        read(fd, c, 1);
    }
    str[i] = '\0';
    return str;
}


int main()
{
	int fd = open("testfile", O_RDONLY);
	if(fd == -1){
		perror("open");
		return 1;
	}

	char *number = ft_getnb(fd);
	if(number) 
	{
			printf("Number read from file : %s\n", number);
			free(number);
	}else
	{
		printf("Failed to read number.\n")
	}
	close(fd);
	return 0;
}