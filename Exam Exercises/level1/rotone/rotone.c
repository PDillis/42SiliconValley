/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 18:44:50 by dporres           #+#    #+#             */
/*   Updated: 2018/04/04 18:53:37 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *s)
{
	int		i;
	char	tmp;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
		{
			tmp = s[i] + 1;
			write(1, &tmp, 1);
		}
		else if (s[i] == 'z')
			write(1, "a", 1);
		else if (s[i] == 'Z')
			write(1, "A", 1);
		else
			write(1, &s[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rotone(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
