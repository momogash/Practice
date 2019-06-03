/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:26:20 by momogash          #+#    #+#             */
/*   Updated: 2019/06/03 14:53:38 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putstr(char *str);
#include <unistd.h>

int	main(void)
{
	ft_putstr("180");
	ft_putchar('\n');)

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
