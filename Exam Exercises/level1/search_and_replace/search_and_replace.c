/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:09:14 by dporres           #+#    #+#             */
/*   Updated: 2018/04/04 22:41:47 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_search_and_replace(char *s1, char *s2, char *s3)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			s1[i] = s3[0];
		}
		i++;
	}
	return (s1);
}

int		main(int argc, char **argv)
{
	char	*tmp;

	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			tmp = ft_search_and_replace(argv[1], argv[2], argv[3]);
			ft_putstr(tmp);
		}
	}
	write(1, "\n", 1);
	return (0);
}
