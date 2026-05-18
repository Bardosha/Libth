/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veres <veres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:14:02 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/18 01:19:06 by veres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	// t_list *lst;
	// t_list *new;
	// char w[] = ", world!";
	// char h[] = "Hello";

	// lst = ft_lstnew(w);
	// printf("Content in *lst: %s\n", (char *)(lst->content));

	// new = ft_lstnew(h);
	// printf("Content in *new: %s\n", (char *)(new->content));

	// ft_lstadd_front(&lst, new);
	// printf("Content after fct: \n");
	// printf("First node: %s\n", (char *)(lst->content));
	// printf("Second node: %s\n", (char *)(lst->next->content));

	// printf("%s", (char *)(lst->content));
	// printf("%s\n", (char *)(lst->next->content));
}
// то есть до этого было lst = ["world" | NULL]
// а после *lst = new, который в свою очередь равен new = ["hello" | →]
// стало lst = ["hello" | →]

// ["hello" | →] через next смотрит на ["world" | NULL] 
// — потому что на шаге 1 ты сделала new->next = *lst.
// *lst → ["hello" | →] → ["world" | NULL]


// то есть это верно: new = ["hello" | →]? без звездочки

// Да, верно. new — это указатель на узел ["hello" | →], без звёздочки.
// Звёздочка нужна только когда хочешь залезть внутрь узла. 
// А сам узел целиком — просто new.

// а если внутрь то это слово "hello"

// Да, именно. *new — это содержимое узла целиком,
// а new->content — это уже конкретно "hello".
// new          — указатель на узел ["hello" | →]
// *new         — сам узел целиком
// new->content — "hello"
// new->next    — указатель на следующий узел
*/