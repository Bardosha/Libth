/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:19:04 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 20:04:30 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && u1[i] != '\0' && u1[i] == u2[i])
		i++;
	if (i == n)
		return (0);
	return (u1[i] - u2[i]);
}
/*
#include <string.h>
int	main(void)
{
	char	s1[] = "Bardosha!";
	char	s2[] = "Bardosha?";

	printf("Org s1: %s and\n    s2: %s\n", s1, s2);
	printf("Deference: %d\n", ft_strncmp(s1, s2, 8));
	printf("Deference: %d\n", ft_strncmp(s1, s2, 9));
	printf("Deference: %d\n", strncmp(s1, s2, 9));
	return (0);
}
*/