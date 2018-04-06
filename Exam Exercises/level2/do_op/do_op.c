/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 23:22:52 by dporres           #+#    #+#             */
/*   Updated: 2018/04/06 00:18:08 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		do_op(int a, char op, int b)
{
	int nb;

	if (op == '+')
		nb = a+b;
	else if (op == '-')
		nb = a-b;
	else if (op == '*')
		nb = a*b;
	else if (op == '/')
		nb = a/b;
	else if (op == '%')
		nb = a%b;
	else
		return (0);
	return (nb);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", do_op(atoi(argv[1]), argv[2][0], atoi(argv[3])));
	}
	return (0);
}
