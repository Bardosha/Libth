/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:14:34 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 19:40:48 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) s;
	while (n > 0)
	{
		*tmp++ = '\0';
		n--;
	}
}
/*
int	main(void)
{
	char	str[] = "Perfect";
	printf("Org str: %s\n", str);

	ft_bzero(str, 3);
	printf("After fct: \n");
	for (int i = 0; i < 8; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return (0);
}
*/