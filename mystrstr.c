
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystrstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:30:17 by momogash          #+#    #+#             */
/*   Updated: 2019/06/25 09:34:53 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

char	*mystrstr(const char *haystack, const char *needle)
{
	while (*haystack)
	{

		char *str = (char *)haystack;
		char *sub = (char *)needle;
		while	(*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (str);
		haystack = str + 1;
	}
	return (NULL);
}

int		main(void)
{
	char *s = "have a great day today";
	puts(mystrstr(s, "arld"));
	return (0);
}
