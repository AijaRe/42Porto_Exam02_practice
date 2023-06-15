/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:46:29 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/15 09:29:30 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* "octet >> i" shifts octet right by i  positions.
 * Bitwise AND (&): Performs a logical AND operation
 * between corresponding bits of two numbers. 
 * The result is 1 only if both bits are 1; otherwise, it's 0.*/

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		ft_putchar(bit);
		i--;
	}
}
/*
int main() 
{
    unsigned char byte;

    byte = 2;
    print_bits(byte);
    return 0;
}*/
