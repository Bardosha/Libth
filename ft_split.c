/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:24:00 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/04 18:56:30 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word;
	char	**arr;
	int		start;
	size_t	len;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c))
			word++;
		i++;	
	}
	arr = malloc(sizeof(char *) * (word + 1));
	start = 0;
	len = 0;
	i = 0;
	j = 0;
	while (j < word)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		len = i - start;
		arr[j] = ft_substr(s, start, len);
		j++;
	}
	arr[word] = NULL;
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