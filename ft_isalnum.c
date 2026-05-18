/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:45 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/18 01:09:14 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
// int	ft_isalnum(int c)
// {
// 	if (ft_isalpha(c) || ft_isdigit(c))
// 		return (c);
// 	return (0);
// }

int main (void)
{
	char    c1 = 'A';
	char    c2 = '7';
	char    c3 = ' ';
	printf("First char: %c\n", c1);
	printf("Second char: %c\n", c2);
	printf("Third char: %c\n", c3);
	printf("FS is Char? %d\n", ft_isalnum(c1));
	printf("SS is Char? %d\n", ft_isalnum(c2));
	printf("TS is Char? %d\n", ft_isalnum(c3));
	return (0);
}
*/