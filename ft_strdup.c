/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:36:53 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/16 23:02:20 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	len;
	int		i;

	len = ft_strlen(s);
	d = malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
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