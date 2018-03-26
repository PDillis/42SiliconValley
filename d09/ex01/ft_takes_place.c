/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:44:56 by dporres           #+#    #+#             */
/*   Updated: 2018/03/22 19:38:34 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("%02d:00 A.M. AND %02d:00 A.M.\n", hour + 12, hour + 1);
	if (hour <= 10 && hour > 0)
		printf("%02d:00 A.M. AND %02d:00 A.M.\n", hour, hour + 1);
	if (hour == 11)
		printf("%02d:00 A.M. AND %02d:00 P.M.\n", hour, hour + 1);
	if (hour == 12)
		printf("%02d:00 P.M. AND %02d:00 P.M.\n", hour, (hour + 1) % 12);
	if (hour > 12 && hour <= 22)
		printf("%02d:00 P.M. AND %02d:00 P.M.\n", hour % 12, (hour + 1) % 12);
	if (hour == 23)
		printf("%02d:00 P.M. AND %02d:00 A.M.\n", hour % 12, hour + 1 - 12);
	if (hour == 24)
		printf("%02d:00 A.M. AND %02d:00 A.M.\n", hour - 12, (hour + 1) % 12);
}
