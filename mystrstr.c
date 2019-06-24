/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystrstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:30:17 by momogash          #+#    #+#             */
/*   Updated: 2019/06/24 15:24:17 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*mystrstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;

	char *str = (char *)haystack;
	char *sub = (char *)needle;
	while (haystack[i])
	{
		while (haystack[i] && sub[j] && haystack[i] == sub[j])
		{
			j++;
			if	(sub[j] != '\0')
				return (&str[i - 1 + j]);
			//haystack = str + 1;
			printf("%d\n",j);
		}
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char *s = "have a great day today";
	ft_putstr(mystrstr(s,""));
	return (0);
}
