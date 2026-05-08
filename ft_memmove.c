/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:18:44 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 20:03:54 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*stmp;
	unsigned char	*dtmp;

	if (!dest && !src)
		return (NULL);
	stmp = (unsigned char *) src;
	dtmp = (unsigned char *) dest;
	if (dtmp < stmp)
	{
		while (n--)
			*dtmp++ = *stmp++;
	}
	else if (dtmp > stmp)
	{
		while (n > 0)
		{
			dtmp[n - 1] = stmp[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "abcdef";

	ft_memmove(src + 2, src, 4); // ababcd
	printf("After fct: %s\n", src); 

	printf("\n");
	char str_src[] = "Hello!";
	char str_dest[7];
	ft_memmove(str_dest, str_src, 6);
	printf("No overlap (separate): %s\n", str_dest);

	return (0);
}
*/