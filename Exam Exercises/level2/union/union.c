/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:19:51 by dporres           #+#    #+#             */
/*   Updated: 2018/04/05 23:17:37 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_cmp(char *str, char c, int index)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[1] == c)
			break;
		i++;
	}
	if (i == index)
		ft_putchar(c);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		ft_cmp(s1, s1[i], i);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s1[j] == s2[i])
				break;
			j++;
		}
		if (!s1[j]
				ft_cmp(s2, s2[i], i);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
