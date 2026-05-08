/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:18:56 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 20:04:11 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
int	main(void)
{
	char s[] = "tripouille";

	//printf("Org str: %s and искомая letter: %c\n", s, c);
	printf("Org str: %s\n", s);
	printf("Here: %s\n", ft_strchr(s, 't' + 256));
	return (0);
}
*/