/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:17:59 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/16 19:49:26 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	res = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("7"));
	printf("%d\n", ft_atoi("77abc"));
	printf("%d\n", ft_atoi("-77"));
	printf("%d\n", ft_atoi("      \t77"));
	printf("%d\n", ft_atoi("abc"));
	printf("%d\n", ft_atoi("+77"));
	printf("%d\n", ft_atoi("+-+-+-+       77"));
	printf("%d\n", ft_atoi("+"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("      "));
	printf("%d\n", ft_atoi("NULL"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483648"));
	return (0);
}
*/