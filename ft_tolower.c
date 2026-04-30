/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:19:24 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 19:35:12 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char    c1 = 'A';
	char    c2 = 'a';

	printf("c1: %c\n", ft_tolower(c1));
	printf("c2: %c\n", ft_tolower(c2));
	return (0);
}
*/