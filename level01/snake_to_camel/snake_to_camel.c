/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:16:33 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/13 14:27:23 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	snake_to_camel(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] == '_')
		{
			i++;
			if (argv[i] >= 'a' && argv[i] <= 'z')
				ft_putchar(argv[i] - 32);
			else
				ft_putchar(argv[i]);
		}
		else
			ft_putchar(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	ft_putchar('\n');
}
