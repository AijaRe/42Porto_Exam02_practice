/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:27:15 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/13 10:48:38 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int	n;
	int	n1;
	int	n2;

	n = 16;
	n1 = 1;
	n2 = 10;
	printf("%d is power of 2: %d\n", n, is_power_of_2(n));
	printf("%d is power of 2: %d\n", n1, is_power_of_2(n1));
	printf("%d is power of 2: %d\n", n2, is_power_of_2(n2));
	return (0);
}*/
