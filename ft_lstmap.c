/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:14:45 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 16:26:52 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;

	res = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst -> next;
	}
	return (res);
}
/*
void    *to_upper(void *content)
{
    char    *str;
    int     i;

    str = ft_strdup((char *)content);
    i = 0;
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
	return (str);
}

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	first = ft_lstnew(ft_strdup("Bardosha")); 
	second = ft_lstnew(ft_strdup(" is "));
	third = ft_lstnew(ft_strdup("Lucky"));

	ft_lstadd_front(&second, first);
	ft_lstadd_back(&second, third);

	printf("FN: %s\n", (char *)first->content);
	printf("SN: %s\n", (char *)first->next->content);
	printf("TN: %s\n", (char *)first->next->next->content);

	printf("\n");
	t_list *map = ft_lstmap(first, to_upper, free);
	printf("FN: %s\n", (char *)map->content);
	printf("SN: %s\n", (char *)map->next->content);
	printf("TN: %s\n", (char *)map->next->next->content);
	return (0);
}
*/