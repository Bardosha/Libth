/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:18:26 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 19:16:21 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	cc;

	i = 0;
	tmp = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (tmp[i] == cc)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char *v = ft_memchr(s, 2 + 256, 3);
	printf("%c\n", *v);
	return (0);
}
*/