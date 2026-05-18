/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:15:37 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/13 23:49:23 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main(void)
{
	char    src[] = "Everything will be perfect!";
	char    dest[19];
	printf("Org str: %s\n", src);
	printf("Copied str with sizeof: %zu\n", ft_strlcpy(dest, src, sizeof(dest)));
	printf("Copied str with sizeof: %s\n", dest);

	unsigned int    n = 29;
	char            desti[29];
	printf("Copied string with n: %zu\n", ft_strlcpy(desti, src, n));
	printf("Copied string with n: %s\n", desti);
	return (0);
}
*/