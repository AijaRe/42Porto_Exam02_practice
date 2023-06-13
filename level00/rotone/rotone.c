/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:14:50 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/12 09:41:13 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rotone(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] == 'Z')
			ft_putchar('A');
		else if (argv[i] == 'z')
			ft_putchar('a');
		else if ((argv[i] >= 'a' && argv[i] < 'z')
			|| (argv[i] >= 'A' && argv[i] < 'Z'))
			ft_putchar(argv[i] + 1);
		else
			ft_putchar(argv[i]);
	i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	ft_putchar ('\n');
	return (0);
}
