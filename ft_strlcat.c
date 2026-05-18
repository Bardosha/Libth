/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:14:58 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/14 00:45:00 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;
	size_t	d_len;

	s_len = 0;
	while (src[s_len])
		s_len++;
	d_len = 0;
	while (d_len < size && dst[d_len] != '\0')
		d_len++;
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] != '\0' && (d_len + i) < (size - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
int main(void)
{
	char    dest[29] = "Everything will";
	char    src[] = " be perfect!";
	printf("Copied str with sizeof: %zu\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("dest: %s\n", dest);

	unsigned int    n = 29;
	char            desti[29] = "Everything will";
	char            srci[] = " be perfect!";
	printf("Copied string with n: %zu\n", ft_strlcat(desti, srci, n));
	printf("desti: %s\n", desti);
	return (0);
}
// while (src[s_len]) — это то же самое,
// что while (src[s_len] != '\0')
// Представь ситуацию: тебе дали строку dst, 
// которая не закрыта нуль-терминатором (битая строка), 
// и сказали, что ее размер — size.Если ты будешь искать '\0'
// обычным strlen, ты можешь уйти далеко за пределы массива
// и программа упадет (Segmentation Fault).
*/