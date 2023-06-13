/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:28:22 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/12 11:03:47 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	i;
	int	size;

	size = end - start;
	if (size < 0)
		size = -size;
	range = (int *)malloc(sizeof(int) * (size + 1));
	if (!range)
		return (0);
	i = 0;
	while (start >= end)
	{
		range[i] = start;
		start--;
		i++;
	}
	while (start <= end)
	{
		range[i] = start;
		start++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	*range;

	range = ft_range(5, -3);
	i = 0;
	while (i < 9)
	{
		printf("%d", range[i]);
		i++;
	}
	free (range);
	return (0);
}*/
