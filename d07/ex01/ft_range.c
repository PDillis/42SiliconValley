/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:29:39 by dporres           #+#    #+#             */
/*   Updated: 2018/03/22 15:40:07 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *d;
	int counter;

	counter = min;
	if (min >= max)
		return (NULL);
	d = (int *)malloc(sizeof(int) * (max - min));
	while (counter < max)
	{
		d[counter - min] = counter;
		counter++;
	}
	return (d);
}
