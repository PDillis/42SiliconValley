/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 01:16:54 by dporres           #+#    #+#             */
/*   Updated: 2018/03/23 02:04:05 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	g_flight = 0;

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (g_flight);
	else if (base % 2 == 0)
	{
		g_flight++;
		return (ft_collatz_conjecture(base / 2));
	}
	else
	{
		g_flight++;
		return (ft_collatz_conjecture(base * 3 + 1));
	}
}
