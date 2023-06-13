/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:55:04 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/13 14:03:31 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] == ' ' || argv[i] == '\t')
		i++;
	while (argv[i] != '\0' && argv[i] != ' ' && argv[i] != '\t')
	{
		ft_putchar(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
