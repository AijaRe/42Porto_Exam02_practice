/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:57:38 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/15 10:19:38 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_capital(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') &&
			(str[i + 1] == ' ' || str[i + 1] == '\t' 
			|| str[i + 1] == '\0'))
			str[i] = str[i] - 32;
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		ft_putchar('\n');
	if (argc >= 2)
	{
		while (i < argc)
		{
			ft_last_capital(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
