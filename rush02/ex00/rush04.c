/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 21:24:41 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 21:25:50 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rushhelp04(int col, int row, int x, int y)
{
	if ((col == 1 && row == 1) || ((col == x && row == y) && x != 1 && y != 1))
	{
		ft_putchar('A');
	}
	else if ((col == 1 && row == y) || (col == x && row == 1))
	{
		ft_putchar('C');
	}
	else if ((col > 1 && row == 1) || (col > 1 && row == y))
	{
		ft_putchar('B');
	}
	else if ((col == 1 && row > 1) || (col == x && row > 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush04(int x, int y)
{
	int col;
	int row;

	if (x >= 0 && y >= 0)
	{
		row = 1;
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				rushhelp04(col, row, x, y);
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush04(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
