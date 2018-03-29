/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 00:09:52 by dporres           #+#    #+#             */
/*   Updated: 2018/03/28 12:10:56 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*link;

	tmp = *begin_list;
	while (tmp)
	{
		link = tmp->next;
		free(link);
		tmp = link;
	}
	*begin_list = NULL;
}
