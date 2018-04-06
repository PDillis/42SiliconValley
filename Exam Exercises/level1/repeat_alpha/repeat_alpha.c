/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:51:10 by dporres           #+#    #+#             */
/*   Updated: 2018/04/04 13:56:34 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_index(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	return (0);
}

void	ft_repeat_alpha(char *str)
{
	int i;
	int rep;

	i = 0;
	rep = 0;
	while (str[i])
	{
		rep = 0;
		while (rep < get_index(str[i]))
		{
			write(1, &str[i], 1);
			rep++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
