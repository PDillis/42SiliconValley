/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 12:05:07 by dporres           #+#    #+#             */
/*   Updated: 2018/03/15 20:50:47 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = 47;
	while (x++ < 57)
	{
		y = x;
		while (y++ < 57)
		{
			z = y;
			while (z++ < 57)
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != 55)
				{
					ft_putchar(44);
					ft_putchar(32);
				}
			}
		}
	}
	return ;
}
