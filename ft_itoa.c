/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:31:39 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/08 15:21:14 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = n;
	if (n <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nbr;

	len = length(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len -= 1;
	nbr = n;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}
/*
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
int	main(void)
{
	int	n = 721721721;
	int a = -2147483648;

	printf("Org num: %d\n", n);
	printf("Int -> char: %s\n", ft_itoa(n));
	printf("Org num: %d\n", a);
	printf("Int -> char: %s\n", ft_itoa(a));
	return (0);
}
*/