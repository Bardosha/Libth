/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:13 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/08 16:18:32 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp++ = (unsigned char)c;
		n--;
	}
	return (s);
}
/*
int main(void)
{
	char str[] = "Perfect";
	printf("Org str: %s\n", str);

	ft_memset(str, '7', 3);
	printf("After fct: %s\n", str);
	return (0);
}
*/