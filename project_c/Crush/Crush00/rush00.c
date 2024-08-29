/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:32:14 by dlesieur          #+#    #+#             */
/*   Updated: 2024/08/10 20:30:38 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void	rush()
{
	int col, r, max,  min;
	r = 1;
	while(r<=5){
		col  = 1;
		while(col<=5)
		{		
			if(col==1 && r==1  || col==5 && r==5)
			{
			write(1,"o",1);
			}
			else if(col==5 && r==1 || col==1 && r==5 ){
			write(1,"o",1);
			}
			else if(r == 1 || r ==5){
			write(1,"-",1);
			}
			else if(col==1 || col==5){
			write(1,"|",1);
			}
			else{
			write(1," ",1);
			}

			col++;
		}
	write(1,"\n",1);
	r++;
	}
}


int	main()
{
	rush();
	return (0);
}


