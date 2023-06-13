/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:25:05 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/13 16:11:05 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy (char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	count_words(char *str)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	return (wc);
}
char 	**ft_split(char *str)
{
	int	i;
	int	j;
	int	wc;
	int	start;
	char	**result;

	wc = count_words(str);
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		start = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > start)
		{
			result[j] = (char *)malloc(sizeof(char) * ((i - start) + 1));
			ft_strncpy(result[j], &str[start], i - start);
			j++;
		}
	}
	result[j] = NULL;
	return(result);
}
/*
int	main(void)
{
	char	*str;
	char	**result;
	int	i;

	str = "Lorem ipsum 123 ";
	i = 0;
	result = ft_split(str);
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
