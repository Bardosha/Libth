/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:34:30 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/04 17:54:11 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	test_toupper(unsigned int i, char *c)
{
	(void) i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char s[] = "Bardosha";
	ft_striteri(s, test_toupper);

	printf("Org str: %s\n", s);
	printf("After fct-s: %s\n", s);
	return (0);
}
*/