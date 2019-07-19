/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whiletest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:57:33 by momogash          #+#    #+#             */
/*   Updated: 2019/07/19 15:55:37 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/*void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		//write(1, &str, 1);
			i++;
	}

}*/

int main(void)
{
	int nbr;

	nbr = 1;
	while(nbr <= 9)
	{
		ft_putchar(nbr + 48);
		ft_putchar('\n');
		nbr++;
	}
	write(1, "finished!\n", 10);
	return(0);
}
