/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 02:35:57 by veres             #+#    #+#             */
/*   Updated: 2026/04/24 02:36:22 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dtmp;
	const unsigned char	*stmp;

	stmp = (const unsigned char *) src;
	dtmp = (unsigned char *) dest;
	if(dtmp > stmp)
	{
		dtmp = dtmp + n - 1;
		stmp = stmp + n - 1;
		while (n > 0)
		{
			*dtmp-- = *stmp--;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*dtmp++ = *stmp++;
			n--;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Perfect";
	printf("Org str: %s\n", src);

	memmove(src + 2, src, 3);
	printf("After fct: %s\n", src);

	// char	arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    // printf("Before:    ");
    // for (int i = 0; i < 6; i++)
    //     printf("%c ", arr[i]);
    // printf("\n");

    // memmove(arr, arr, 4); // dst = arr[2], src = arr[0], копируем 4 байта
    // printf("After fct: ");
    // for (int i = 0; i < 6; i++)
    //     printf("%c ", arr[i]);
    // printf("\n");
	// return (0);


	// до:    [A] [B] [C] [D] [ ] [ ]
    //     	1   2   3   4   5   6
	// src = 1 (откуда берём, начало — ячейка A)
	// dst = 3 (куда кладём, начало — первая пустая)
	// dst > src → 3 > 1 → надо идти справа налево.
	// берёшь D (последний), кладёшь на место 6:
	// [A] [B] [C] [D] [ ] [D]
	// берёшь C, кладёшь на место 5:
	// [A] [B] [C] [D] [C] [D]
	// берёшь B, кладёшь на место 4:
	// [A] [B] [C] [B] [C] [D]
	// берёшь A, кладёшь на место 3:
	// [A] [B] [A] [B] [C] [D]


	// Если dst < src, то сдвигаешь влево:
	// до:    [ ] [ ] [A] [B] [C] [D]
	// 		1   2   3   4   5   6
	// src = 3, dst = 1 → dst < src → 1 < 3 → идём слева направо.
	// берёшь A (место 3), кладёшь на место 1:
	// [A] [ ] [A] [B] [C] [D]
	// берёшь B (место 4), кладёшь на место 2:
	// [A] [B] [A] [B] [C] [D]
	// берёшь C (место 5), кладёшь на место 3:
	// [A] [B] [C] [B] [C] [D]
	// берёшь D (место 6), кладёшь на место 4:
	// [A] [B] [C] [D] [C] [D]

	// сдвиг вправо (dst > src) → иди справа налево
	// сдвиг влево (dst < src) → иди слева направо
}
*/