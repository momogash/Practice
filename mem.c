/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:07:13 by momogash          #+#    #+#             */
/*   Updated: 2019/06/04 16:32:04 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c);


int main(void)
{
	
	char count;
	char *ptr;
	char *p;

	ptr = (char *) malloc(35 * sizeof(char*)); //allocation of 35byte of mem
	if (ptr == NULL) //Malloc to return null if allocation fails
		return 1; //always good practice to use malloc as you never know if the installed 

	p = ptr; //since ptr points to the first block of the allocated memory,p is our loop through the mem block while count places alphabets

	count = 65; // count is assigned to A to start printing
	while	(count <= 90)
	{
		ft_putchar(count);
		count++;
		//*p++ = count; //
		//*p = '\0';
	}
	free(ptr); //free the allocated 35 byte of memory at the end of the program to be used again 
	return(0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

