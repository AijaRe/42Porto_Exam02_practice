/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:50:16 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/12 09:57:26 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	max;
	int	i;

	i = 0;
	max = tab[i];
	if (len == 0)
		return (0);
	while (len > 1)
	{
		if (tab[i] < tab[i + 1] && tab[i + 1] > max)
			max = tab[i + 1];
		len--;
		i++;
	}
	return (max);
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {0, 1, 6, 2, 3};
	int	len = 5;
	printf("%d", max(tab, len));
}*/
