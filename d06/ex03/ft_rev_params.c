/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:31:47 by dporres           #+#    #+#             */
/*   Updated: 2018/03/21 16:39:31 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int counter;
	int index;

	counter = 0;
	index = argc - 1;
	if (argc >= 2)
	{
		while (index > 0)
		{
			while (argv[index][counter] != '\0')
			{
				ft_putchar(argv[index][counter]);
				counter++;
			}
			counter = 0;
			index--;
			ft_putchar('\n');
		}
	}
	return (0);
}
