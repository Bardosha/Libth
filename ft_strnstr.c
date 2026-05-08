/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:19:10 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 19:49:25 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	big[] = "Bardosha";
	char	little[] = "osh";
	
	printf("1: %s\n", ft_strnstr(big, little, 8));
	printf("2: %s\n", ft_strnstr(big, little, 2));
	return (0);
}

// big → где ищем
//   little → что ищем
// ищет только в первых len символах.
*/