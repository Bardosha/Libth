/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:14:33 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 19:51:35 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	char	f[] = "Bardosha";
	char	s[] = " is ";
	char	t[] = "Lucky";

	first = ft_lstnew(f);
	second = ft_lstnew(s);
	third = ft_lstnew(t);

	ft_lstadd_front(&third, second);
	ft_lstadd_front(&second, first);
	printf("FN: %s\n", (char *)first->content);
	printf("SN: %s\n", (char *)first->next->content);
	printf("TN: %s\n", (char *)first->next->next->content);
	printf("How many nodes (hmn) %d\n", ft_lstsize(first));
	printf("\n");
	t_list	*last = ft_lstlast(first);
	printf("Last node (TN): %s\n", (char *)last->content);
	return (0);
}
*/