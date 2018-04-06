/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 22:47:46 by dporres           #+#    #+#             */
/*   Updated: 2018/04/03 23:30:35 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_first_a(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_first_a(argv[1]))
			write(1, "a\n", sizeof(char) * 2);
		else
			write(1, "\n", 1);
	}
	else if (argc == 1)
	{
		write(1, "a\n", 2);
	}
	return (0);
}
