/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:01:50 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/25 18:01:59 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * purpose : 
 * convert a string representation of an integer to  its corresponding value.
 * @param str a pointer to the null terminated string that contain  the number
 * @return the value in int
 * @example if !string : return (0) ;
 * @note in our implementation we want absolute number. We don't bother with returning "-" 
 * 
 */
/*
int	ft_atoi(const char *str)
{
	int res = 0;
	int negative = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-') {
		negative = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return res * negative;
}*/