/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:40:16 by dporres           #+#    #+#             */
/*   Updated: 2018/03/21 20:47:00 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	swap(int *a, int *b)
{
	char a_copy;

	a_copy = *a;
	*a = *b;
	*b = a_copy;
}

int		ft_strcmp(char *s1, char *s2)
{
	int count;
	
	count = 0;
	while (s1[count] == s2[count])
	{
		count++;
		if (s2[count] == '\0')
			return (0);
	}
	return (s1[count] - s2[count]);
}

void	ft_bubble_sort(char arr[], int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < n -1)
	{
		while (j < n - i - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

int		main(int argc, char **argv)
{
	int counter;
	int index;

	counter = 0;
	index = 0;
	if (argc >= 2)
	{
		while (index < argc)
		{
			while (count < argc)
			{
				ft_bubble_sort(argv[index][count], argv[index][count + 1]);
				count++;
			}
		}
	}
	return (0);
}
