/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:21:01 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/29 19:34:31 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
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

	ft_memcpy(dest, src, 3);
	printf("After fct: %s\n", dest); //Per
	return (0);
}
*/