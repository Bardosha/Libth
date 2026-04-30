/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:53:54 by asaunina          #+#    #+#             */
/*   Updated: 2026/04/30 19:33:59 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	totalsize;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	totalsize = nmemb * size;
	arr = malloc(totalsize);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, totalsize);
	return (arr);
}
/*
int	main(void)
{
	ft_calloc(7, 4);
	// int *arr = (int *)ft_calloc(7, 4);

	// for (int i = 0; i < 7; i++)
	// {
	// 	printf("%d ", arr[i]);
	// }
	return (0);
}

// nmemb - количество элементов.
// size - размер каждого элемента
*/