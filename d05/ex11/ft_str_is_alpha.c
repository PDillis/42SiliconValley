/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:46:10 by dporres           #+#    #+#             */
/*   Updated: 2018/03/20 20:06:43 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
