/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:28:16 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/04 17:33:49 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ns;
	size_t			len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ns = malloc(sizeof(char) * (len + 1));
	if (!ns)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
/*
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
char	test_toupper(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	char s[] = "Bardosha";

	printf("Org str: %s\n", s);
	printf("After fct-s: %s\n", ft_strmapi(s, test_toupper));
	// free (res) = ft_strampi...
	return (0);
}
*/