/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:39:26 by dporres           #+#    #+#             */
/*   Updated: 2018/03/16 23:39:09 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);

void	ft_swap(int *a, int *b)
{
	int a_copy;

	a_copy = *a;
	*a = *b;
	*b = a_copy;
}

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strrev(char *str)
{
	int		i
	int		size;

	size = ft_strlen(str);
	i = 0;
	while (i < (size + 1) / 2)
	{
		ft_swap(str + i, str + size - 1 - i);
		i++;
	}
	return (str);
}
