/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:18:26 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 19:39:54 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *) s;
	while (i < n)
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s[] = {'A', '\0', 'V'};

	char *v = ft_memchr(s, 'V', 3);
	printf("%c\n", *v);
	return (0);
}
*/