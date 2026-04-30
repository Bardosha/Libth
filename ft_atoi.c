/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:17:59 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 19:41:02 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		res;
	char	sign;

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
	return (sign * res);
}
/*
int	main(void)
{
	char	n1[] = "777";
	char	n2[] = "      \t  777";
	char	n3[] = "7a7";
	char	n4[] = "  a77";
	char	n5[] = " -7 77";
	char	n6[] = "+777";
	char	n7[] = " +-+-+777";
	// char	n8[] = "2147483647";
	// char	n9[] = "-2147483648";
	
	printf("777 = %d\n", ft_atoi(n1));
	printf("      \\t  777 = %d\n", ft_atoi(n2));
	printf("7a7 = %d\n", ft_atoi(n3));
	printf("  a77 = %d\n", ft_atoi(n4));
	printf(" -7 77 = %d\n", ft_atoi(n5));
	printf("+777 = %d\n", ft_atoi(n6));
	printf(" +-+-+777 = %d\n", ft_atoi(n7));
	// printf("2147483647 = %d\n", ft_atoi(n8));
	// printf("-2147483648 = %d\n", ft_atoi(n9));
	return (0);
}
*/