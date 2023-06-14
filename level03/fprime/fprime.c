/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:51:59 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/14 10:51:49 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* Divide number by smallest prime (2). Check if it is divisible completely.
* Update the number and keep dividing, until number is not divisible evenly.
* Move to the next prime. 
* Last number will be the number itself. */

void	fprime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		printf("1");
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			printf("%d", i);
			if (nb != i)
				printf("*");
			nb = nb / i;
			i--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		fprime(nb);
	}
	printf("\n");
	return (0);
}
