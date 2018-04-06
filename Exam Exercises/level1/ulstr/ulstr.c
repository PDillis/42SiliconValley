/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 18:58:24 by dporres           #+#    #+#             */
/*   Updated: 2018/04/04 19:07:32 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ulstr(char *s)
{
	int		i;
	char	tmp;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			tmp = s[i] + ('A' - 'a');
			write(1, &tmp, 1);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			tmp = s[i] + ('a' - 'A');
			write(1, &tmp, 1);
		}
		else
			write(1, &s[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_ulstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
