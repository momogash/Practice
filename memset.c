/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 09:11:31 by momogash          #+#    #+#             */
/*   Updated: 2019/06/21 11:31:22 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	int		i;

	p = (char *)b;
	i = 0;
	if (b)
	{
		while (len > 0)
		{
			p[i] = c;
			i++;
		}
		return (b);
	}
	return (NULL);
}

int		main(void)
{
	ft_putstr(ft_memset("Malloc", '#', 3));
	return (0);
}
