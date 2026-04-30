/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:19:17 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 19:39:03 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			ptr = &s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return ((char *)ptr);
}
/*
int	main(void)
{
	char    s[] = "Veres";
	char    c = 'e';

	printf("Org str: %s and искомая letter: %c\n", s, c);
	printf("Here: %s\n", ft_strrchr(s, c));
	return (0);
}
*/