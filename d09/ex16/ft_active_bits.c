/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 08:54:29 by dporres           #+#    #+#             */
/*   Updated: 2018/03/23 08:59:06 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_active_bits(int value)
{
	unsigned int count;

	count = 0;
	while (value)
	{
		count += value & 1;
		value >>= 1;
	}
	return (count);
}
