/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:23:16 by momogash          #+#    #+#             */
/*   Updated: 2019/06/04 12:56:16 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *p;
	p = (char *) malloc(100 * sizeof(int));
	if	(p == NULL)
		return (1);

	return (0);
}
