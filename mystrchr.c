/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystrchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 11:35:30 by momogash          #+#    #+#             */
/*   Updated: 2019/06/24 12:01:09 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*mystrchr(const char *str, int c)
{
	while (*str != '\0' && *str != c)
	{
		str++;
	}
	if (*str == c)
	{
		return ((char *)str);
	}
	else
	{
		return (NULL);
	}
}

int		main(void)
{
	char *s = "Hello World";
	ft_putstr(mystrchr(s, 'f'));

	return (0);
}
