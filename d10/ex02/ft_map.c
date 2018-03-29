/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:43:55 by dporres           #+#    #+#             */
/*   Updated: 2018/03/27 22:48:04 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *d;
	int i;

	i = 0;
	d = (int *)malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		d[i] = f(tab[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
