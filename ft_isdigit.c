/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:32 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 18:31:36 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main(void)
{
	char    c1 = 'A';
	char    c2 = '7';
	printf("First char: %c\n", c1);
	printf("Second char: %c\n", c2);
	printf("FS is Char? %d\n", ft_isdigit(c1));
	printf("SS is Char? %d\n", ft_isdigit(c2));
	return (0);
}
*/