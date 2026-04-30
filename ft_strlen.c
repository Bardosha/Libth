/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:16:01 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/29 19:35:42 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/*
#include "libft.h"
int main(void)
{
	char    str1[] = "Perfect";
	char    str2[] = "Perf   ect";
	printf("FS: %s\n", str1);
	printf("SS: %s\n", str2);

	printf("Length of FS: %d\n", ft_strlen(str1));
	printf("Length of SS: %d\n", ft_strlen(str2));
	return (0);
}
*/