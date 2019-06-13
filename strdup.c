/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:37:33 by momogash          #+#    #+#             */
/*   Updated: 2019/06/13 16:43:19 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ft_strdup(char *src)
{
	char* dup;
	char *p;
	int n;

	n =  strlen(src);
	dup = (char*)malloc(sizeof(char) * strlen(src)+1);

	if (dup == NULL)
		return( (char *)NULL);
	p = dup;

	//if(!src)
	{
		while(*src)
		{
			dup = src;
			src++;
			dup++;
		}
		*dup = '\0';
		return(*p);   
	}
	//return (NULL);
}

int main()
{
	char s[12] = "ooga booga!";
	char *d;
	int i;


	d = ft_strdup(s);
	i = strlen(d);
	printf("the string duplicate is, '%s' of length '%i'" ,d,i);

	return (0);
}
