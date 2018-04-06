/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:06:03 by dporres           #+#    #+#             */
/*   Updated: 2018/04/05 14:57:27 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	if (tab)
	{
		max = tab[i];
		while (i < len)
		{
			if (tab[i] >= max)
				max = tab[i];
			i++;
		}
		return (max);
	}
	return (0);
}
