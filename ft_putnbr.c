/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:15:57 by momogash          #+#    #+#             */
/*   Updated: 2019/07/19 17:36:18 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
		if	(nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr(-1*nbr);
		}
		else if	(nbr > 9)
		{
			if (nbr / 10)
				ft_putnbr(nbr / 10);
			ft_putchar(48 + (nbr % 10));
		}
		else
			ft_putchar(nbr + 48);
}

int main(void)
{
	int n;

	n = 1;
	while	(n <= 100)
	{
		ft_putnbr(n);
		ft_putchar('\n');
		n++;
	}
	return(0);
}
