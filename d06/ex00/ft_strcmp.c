/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 00:09:18 by dporres           #+#    #+#             */
/*   Updated: 2018/03/21 00:12:59 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] == s2[count])
	{
		count++;
		if (s1[count] == s2[count] && s2[count] == '\0')
			return (0);
	}
	return (s1[count] - s2[count]);
}
