/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:48:43 by dporres           #+#    #+#             */
/*   Updated: 2018/03/27 21:52:24 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		counter;

	counter = 0;
	tmp = begin_list;
	if (tmp)
	{
		counter += 1;
		while (tmp->next)
		{
			tmp = tmp->next;
			counter += 1;
		}
	}
	return (counter);
}
