/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 02:07:52 by dporres           #+#    #+#             */
/*   Updated: 2018/03/23 16:32:36 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_str_lowcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] += 'a' - 'A';
		}
		counter++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int index;

	i = 0;
	j = 1;
	index = 1;
	if (argc >= 2)
	{
		while (index < argc)
		{
			argv[index] = ft_str_lowcase(argv[index]);
			if (argv[index] == ("president" || "attack" || "bauer"))
			{
				write(1, "Alert!!!\n", 9);
				return (0);
			}
			index++;
		}
	}
	return (0);
}
