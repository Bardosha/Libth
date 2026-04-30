/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isapha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:40 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 18:31:16 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main(void)
{
	char    c1 = 'A';
	char    c2 = '\0';
	printf("First char: %c\n", c1);
	printf("Second char: %c\n", c2);
	printf("FS is Char? %d\n", ft_isalpha(c1));
	printf("SS is Char? %d\n", ft_isalpha(c2));
	return (0);
}
*/