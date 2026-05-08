/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:53:50 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 16:56:02 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strl;
	char	*sub;

	if (s == NULL)
		return (NULL);
	strl = ft_strlen(s);
	if (start >= strl)
		return (ft_strdup(""));
	if (len > strl - start)
		len = strl - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
int	main(void)
{
	char			s[] = "Bardosha is Lucky";
	//char			s[] = " ";

	unsigned int	start = 12;
	size_t			len = 9;

	printf("Org str: %s\n", s);
	printf("Substring: %s\n", ft_substr(s, start, len));
	//printf("%lu\n", strlen(ft_substr(s, start, len)));
	return (0);
}

// sub[i] = s[start]; |   sub[i] = s[start + i];    
// i++;			   	  |   i++;
// start++;
*/