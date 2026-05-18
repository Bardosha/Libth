/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:24:00 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/16 22:49:28 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cwords(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (i > 0 && s[i - 1] == c && s[i] != c))
			words++;
		i++;
	}
	return (words);
}

static void	free_arr(char **arr, size_t j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

static int	fill_arr(char **arr, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		arr[j] = ft_substr(s, start, i - start);
		if (!arr[j])
		{
			free_arr(arr, j);
			return (0);
		}
		j++;
	}
	arr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**arr;

	if (!s)
		return (NULL);
	words = cwords(s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	if (!fill_arr(arr, s, c, words))
		return (NULL);
	return (arr);
}
/*
int	main(void)
{
	char	s[] = "  Bardosha is Lucky  ";
	char	c = ' ';

	printf("Org str: %s\n", s);

	char **res = ft_split(s, c);

	printf("Splited str: ");
	int i = 0;
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		i++;
	}

	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res); 
	return (0);
}
*/