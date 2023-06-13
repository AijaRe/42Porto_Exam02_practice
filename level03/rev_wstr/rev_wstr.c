/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:35:17 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/13 12:20:32 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_words(char *argv)
{
	int	i;
	int	start;
	int	end;
	int	flag;
	
	i = 0;
	while (argv[i] != '\0')
		i++;
	while (i > 0)
	{
		i--;
		end = i;
		while (i >= 0 && argv[i] != ' ' && argv[i] != '\t')
			i--;
		start = i + 1;
		flag = start; 
		while (start <= end)
		{
			ft_putchar(argv[start]);
			start++;
		}
		if (flag != 0)
			ft_putchar(' ');
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		rev_words(argv[1]);
	ft_putchar('\n');
}
