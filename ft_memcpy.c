/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:21:01 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/18 01:48:37 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*stmp;
	unsigned char		*dtmp;

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

	ft_memcpy(dest, src, 3);
	printf("After fct: %s\n", dest); //Per
	return (0);
	
	// char src[] = "abcdef";

	// ft_memcpy(src + 2, src, 4); // ababcd
	// printf("After fct: %s\n", src); 
	// return (0);
}
*/