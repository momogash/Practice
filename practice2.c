/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:48:07 by momogash          #+#    #+#             */
/*   Updated: 2019/06/03 14:52:56 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(unsigned char c);

#include <unistd.h>

int	main(void)
{
	unsigned char mychar;
	mychar = 180;
	while (mychar < 204)
	{
		ft_putchar(mychar);
		mychar++;
	}
	ft_putchar('\n');
	return (0);
}

void ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}
