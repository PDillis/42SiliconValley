/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 12:26:09 by dporres           #+#    #+#             */
/*   Updated: 2018/03/21 16:26:54 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;

	index = 0;
	while (argv[0][index] != '\0')
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	ft_putchar('\n');
}
