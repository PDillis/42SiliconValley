/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:25:01 by dporres           #+#    #+#             */
/*   Updated: 2018/03/17 22:53:29 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int i;
	int half;

	i = 1;
	count = 2;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (count <= (nb / 2))
	{
		if (nb / count == count)
		{
			return (count);
		}
		else
		{
			return (0);
		}
		i++;
		count++;
	}
}
