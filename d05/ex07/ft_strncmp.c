/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 12:48:24 by dporres           #+#    #+#             */
/*   Updated: 2018/03/20 15:41:29 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n > 0)
	{
		while (counter < n && s1[counter] == s2[counter])
		{
			counter++;
			if (s1[counter] == s2[counter] && s2[counter] == '\0')
				return (0);
		}
		if (counter < n)
			return (s1[counter] - s2[counter]);
		else
			return (s1[counter - 1] - s2[counter - 1]);
	}
	else
		return (0);
}
