/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 22:43:01 by dporres           #+#    #+#             */
/*   Updated: 2018/04/04 23:21:55 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alpha_mirror(char *str)
{
	int		i;
	char	tmp;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			tmp = 'a' + 'z' - str[i];
			write(1, &tmp, 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			tmp = 'A' + 'Z' - str[i];
			write(1, &tmp, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
