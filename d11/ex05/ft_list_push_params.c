/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 22:03:10 by dporres           #+#    #+#             */
/*   Updated: 2018/03/28 00:06:11 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **ar)
{
	t_list	*tmp;
	t_list	*list;
	int		i;

	tmp = NULL;
	list = NULL;
	i = 0;
	while (i < ac)
	{
		list = ft_create_elem(ar[i]);
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}
