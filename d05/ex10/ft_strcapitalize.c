/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:11:47 by dporres           #+#    #+#             */
/*   Updated: 2018/03/20 23:43:04 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_word_num(char c)
{
	if ((c <= 'Z' && c >= 'A') ||
			(c <= 'z' && c >= 'a') || (c <= '9' && c >= '0'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		while (ft_is_word_num(*ptr) == 0)
		{
			if (*ptr == '\0')
				break ;
			ptr++;
		}
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
		while (ft_is_word_num(*ptr) == 1)
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
				*ptr += 32;
			ptr++;
		}
	}
	return (str);
}
