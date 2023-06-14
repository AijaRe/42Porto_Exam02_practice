/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:33:21 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/14 09:21:08 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* First, join the second string to the first one.
 * Verify for doubles in the joined sting backwards
 * (from beginning to the position of the letter to be checked). */
 
void	ft_putchar (char c)
{
	write(1, &c, 1);
}

int	check_doubles(char *s1, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (s1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	j = 0;
	while (j < i)
	{
		if (check_doubles(s1, s1[j], j) == 1)
		{
			ft_putchar(s1[j]);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
