/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:25:27 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/04 18:56:05 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*fix;
	int		start;
	int		end;
	int		len;
	int		i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (NULL);

	end = ft_strlen(s1);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = (end - start) + 1;
	fix = malloc(sizeof(char) * len);
	if (!fix)
		return (NULL);
	i = 0;
	while (start < end)
		fix[i++] = s1[start++];
	fix[i] = '\0';
	return (fix);
}
/*
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
int	main(void)
{
	char	s1[] = "777Lucky777";
	char	set[] = "7";

	printf("Org str: %s\n", s1);
	printf("Fixed str: %s\n", ft_strtrim(s1, set));
	return (0);
}
*/