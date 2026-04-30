/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:53:50 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 21:07:48 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strl;
	char	*sub;

	if (s == NULL)
		return (NULL);
	strl = strlen(s);
	if (start >= strl)
	{
		sub[0] = '\0';
		return (sub);
	}
	if (len > strl - start)
		len = strl - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);

	i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

int	main(void)
{
	char	s[] = "Bardosha is Lucky";
	int		start = 12;
	int		len = 9;

	printf("Org str: %s\n", s);
	printf("After fct: %s\n", ft_substr(s, start, len));
	printf("%lu\n", strlen(ft_substr(s, start, len)));
	return (0);
}

// sub[i] = s[start]; |   sub[i] = s[start + i];    
// i++;			   	  |   i++;
// start++;