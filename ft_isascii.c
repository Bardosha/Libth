/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:36 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 18:31:25 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	char    c1 = 'A';
	char    c2 = '7';
	char    c3 = ' ';
	printf("First char: %c\n", c1);
	printf("Second char: %c\n", c2);
	printf("Third char: %c\n", c3);
	printf("FS is Char? %d\n", ft_isascii(c1));
	printf("SS is Char? %d\n", ft_isascii(c2));
	printf("TS is Char? %d\n", ft_isascii(c3));
	return (0);
}
*/