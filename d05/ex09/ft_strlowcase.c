/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:55:12 by dporres           #+#    #+#             */
/*   Updated: 2018/03/20 17:01:06 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}
