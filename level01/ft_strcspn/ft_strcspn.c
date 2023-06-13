/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:31:51 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/12 15:47:28 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

/*The strcspn() function calculates the length of the initial segment 
* of s which consists entirely of bytes not in reject.
* The strcspn() function returns the number of bytes in the initial segment 
* of s which are not in the string reject.*/

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
int main () {
   int	len;
   int	len2;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "013";

   len = strcspn(str1, str2);
   len2 = ft_strcspn(str1, str2);

   printf("Orig: First matched character is at %d\n", len + 1);
   printf("ft_strcspn: First matched character is at %d\n", len2 + 1);

   return(0);
}*/
