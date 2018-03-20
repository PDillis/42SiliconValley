/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 01:18:16 by dporres           #+#    #+#             */
/*   Updated: 2018/03/18 23:41:47 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sastantua(int size)
{
	int rows;
	int cols;
	int space;

	rows = 1;
	cols = 0;
	space = 0;
	while (rows++ <= size * (size + 5) / 2)
	{
		while (space++ <= size * (size + 5) / 2 - rows)
		{
			ft_putchar(' ');
		}
		space = 0;
		ft_putchar('/');
		while (cols++ != 2 * rows - 3)
		{
			ft_putchar('*');
		}
		ft_putchar('\\');
		ft_putchar('\n');
		cols = 0;
	}
}

int		main(void)
{
	sastantua(1);
	return (0);
}
