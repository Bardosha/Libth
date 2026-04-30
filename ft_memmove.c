/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:18:44 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 19:39:19 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dtmp;
	unsigned char	*stmp;

	stmp = (unsigned char *) src;
	dtmp = (unsigned char *) dest;
	while (n > 0)
	{
		*dtmp++ = *stmp++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Perfect";
	char	dest[10];
	printf("Org str: %s\n", src);

	ft_memmove(dest, src, 3);
	printf("After fct: %s\n", dest);
	return (0);
}
*/