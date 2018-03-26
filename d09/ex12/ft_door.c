/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 08:32:03 by dporres           #+#    #+#             */
/*   Updated: 2018/03/23 08:54:07 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str, i);
	}
}

ft_bool close_door(t_door *door)
{
	ft_putstr("Door is open ?";
			return (door->state = OPEN);
}

void	is_door_open(t_door door)
{
	ft_putstr("Door is open ?");
	return (door->state = OPEN);
}

ft_bool is_door_close(t_door* door)
{
	ft_putstr("Door is close ?");
}
