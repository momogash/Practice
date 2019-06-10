/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:25:52 by momogash          #+#    #+#             */
/*   Updated: 2019/06/10 14:18:49 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <string.h>

char	strcpy(char *src, char *dest);
void ft_putchar(char c);
void ft_putstr(char *str);
size_t	ft_strlen(char *s);
void	ft_putnbr(int n);
size_t i;

int main(void)
{
	char *s = "hello";
	char d;

	dest = (char *)malloc(strlen(s)+1);

	//if ( d ==NULL)
		//return(NULL);
	//dest = *d
	ft_putstr(strcpy(s, d));

	return (0);
}


char	strcpy(char *src, char *dest)
{

	i = 0;
	while(src[i] != '\0') 
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	return(dest);
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

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

size_t	ft_strlen(char *s)
{

	i = 0;
	while (s[i] != '\0')
		i++;
		return(i);
}
