/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:36:53 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 18:27:10 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		len;
	int		i;

	len = ft_strlen(s) + 1;
	d = malloc(sizeof(char) * len);
	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*
int	main(void)
{
	char	s[] = "Bardosha";
	printf("Orgg str: %s\n", s);
	printf("Duplicated str: %s\n", ft_strdup(s));
	return (0);
}
*/