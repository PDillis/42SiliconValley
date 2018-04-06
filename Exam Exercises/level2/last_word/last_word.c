/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 00:19:51 by dporres           #+#    #+#             */
/*   Updated: 2018/04/06 00:39:32 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i = i - 1;
	while ((str[i] == ' ' || str[i] == '\t') && i >= 0)
		i--;
	while ((str[i] >= '!' && str[i] <= '~') && (str[i - 1] != ' ' || str[i - 1] != '\t'))
		i--;
	i = i + 1;
	while (str[i] >= '!' && str[i] <= '~')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc ==2)
	{
		ft_last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
