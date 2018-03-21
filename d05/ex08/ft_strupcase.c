/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:42:57 by dporres           #+#    #+#             */
/*   Updated: 2018/03/20 16:02:05 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] -= 32;
		}
		counter++;
	}
	return (str);
}
