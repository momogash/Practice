/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:43:56 by momogash          #+#    #+#             */
/*   Updated: 2019/06/10 15:38:32 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char* ft_strcpy(char *src, char *dest);
void ft_putchar(char c);
void ft_putstr(char *str);



char* ft_strcpy(char  *src, char *dest)
{

	if (dest == NULL || src == NULL) // return null if no memory is allocated for destination. this memory is allocted in main when you declare your source and destination.
		return(NULL);
	char *p = dest; //take a pointer p to point to the begining of destination. we will later return this pointer.

	while(*src != '\0')
	{
		*dest = *src; //copying the string
		src++;
		dest++;
	}
	*dest = '\0'; // null terminator included because string is copied until the null is reached.
	return (p);

}

int main(void)
{
	char s[] = " Mosa le TT"; //my source string
	char d[11];//my destination string

	ft_putstr(ft_strcpy(s, d));
	ft_putchar('\n');

}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
/*str = "180";*/
	while	(str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
