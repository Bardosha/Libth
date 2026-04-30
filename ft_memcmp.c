/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:18:35 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 19:39:33 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ts1;
	unsigned char	*ts2;

	i = 0;
	ts1 = (unsigned char *) s1;
	ts2 = (unsigned char *) s2;
	while (i < n && ts1[i] == ts2[i])
		i++;
	if (i == n)
		return (0);
	return (ts1[i] - ts2[i]);
}
/*
int	main(void)
{
	char a[] = {'a', '\0', 'c'};
	char b[] = {'a', '\0', 'b'};

	printf("a, \\0, b and a, \\0, c: %d\n", ft_memcmp(a, b, 3));
	printf("   a, \\0 and a, \\0: %d\n", ft_memcmp(a, b, 0));
	return (0);
}
*/