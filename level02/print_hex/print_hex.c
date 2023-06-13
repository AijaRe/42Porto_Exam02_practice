/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:30:45 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/13 15:04:37 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *argv)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (argv[i] != '\0')
	{
		nb = nb * 10;
		nb = nb + (argv[i] - '0');
		i++;
	}
	return (nb);
}

void	putnb_hex(int nb, char *base)
{
	if (nb < 16)
		ft_putchar(base[nb]);
	if (nb >= 16)
	{
		putnb_hex(nb / 16, base);
		putnb_hex(nb % 16, base);
	}
}

int	main(int argc, char **argv)
{
	char	*hex_base;
	int	nb;
	
	hex_base = "0123456789abcdef";
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		putnb_hex(nb, hex_base);
	}
	ft_putchar('\n');
	return (0);
}
