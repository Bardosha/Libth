/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:24:00 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/08 15:25:32 by asaunina         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (cwords(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < cwords(s, c))
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		arr[j] = ft_substr(s, start, i - start);
		j++;
	}
	arr[j] = NULL;
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