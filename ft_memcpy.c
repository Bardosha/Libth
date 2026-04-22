/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:21:01 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/22 18:11:58 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dtmp;
	unsigned char	*stmp;

	stmp = (const unsigned char *) src;
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

	memcpy(dest, src, 3);
	printf("After fct: %s\n", dest); //Per
	return (0);
}
*/