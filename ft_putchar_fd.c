/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:55:18 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/04 18:12:29 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
//#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
int	main(void)
{
	char	c = 'A';
	int fd = 1;
	ft_putchar_fd(c, fd);
	return (0);
}
*/