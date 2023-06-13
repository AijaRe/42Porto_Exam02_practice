/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:58:51 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/13 11:32:12 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	lcm;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while (lcm % a != 0 || lcm % b != 0)
		lcm++;
	return (lcm);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 3;
	printf("LCM of %d and %d is: %d", a, b, lcm(a, b));
}*/
