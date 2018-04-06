/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:52:58 by dporres           #+#    #+#             */
/*   Updated: 2018/04/06 00:03:54 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	n;

	n = 128;
	while (n > 0)
	{
		if (octet & n)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		n /= 2; 
	}
}
