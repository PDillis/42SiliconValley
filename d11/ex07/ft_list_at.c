/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:14:29 by dporres           #+#    #+#             */
/*   Updated: 2018/03/28 12:56:03 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*tmp;
	unsigned int	count;

	count = 0;
	tmp = begin_list;
	if (!nbr)
		return (tmp);
	if (!tmp)
		return (NULL);
	else
	{
		while (tmp && count < nbr)
		{
			tmp = tmp->next;
			count++;
		}
	}
	return (tmp);
}
