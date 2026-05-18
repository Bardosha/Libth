/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 02:16:55 by veres             #+#    #+#             */
/*   Updated: 2026/05/18 02:17:13 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main(void)
{
	char    c1 = 'A';
	char    c2 = '\0';
	printf("First char: %c\n", c1);
	printf("Second char: %c\n", c2);
	printf("FS is Char? %d\n", ft_isalpha(c1));
	printf("SS is Char? %d\n", ft_isalpha(c2));
	return (0);
}
*/