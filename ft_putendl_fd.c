/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:37:16 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/04 18:43:45 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
int	main(void)
{
	char	c[] = "Bardosha";
	int fd = 1;
	ft_putendl_fd(c, fd);
	return (0);
}
*/