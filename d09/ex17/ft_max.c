/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 09:01:45 by dporres           #+#    #+#             */
/*   Updated: 2018/03/23 09:18:42 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int index;
	int max;

	index = 0;
	max = -2147483648;
	while (index < length)
	{
		if (tab[index] > max)
			max = tab[index];
		index++;
	}
	return (max);
}
