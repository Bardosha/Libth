/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:14:18 by asaunina          #+#    #+#             */
/*   Updated: 2026/05/07 16:26:09 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	// char	f[] = "Bardosha";
	// char	s[] = " is ";
	// char	t[] = "Lucky";
// Для качественной работы с free, которая очищает память 
// только созд. через malloc
	first = ft_lstnew(ft_strdup("Bardosha")); 
	second = ft_lstnew(ft_strdup(" is "));
	third = ft_lstnew(ft_strdup("Lucky"));

	ft_lstadd_front(&second, first);
	ft_lstadd_back(&second, third); // &lst, new

	printf("FN: %s\n", (char *)first->content);
	printf("SN: %s\n", (char *)first->next->content);
	printf("TN: %s\n", (char *)first->next->next->content);

	// first->next->next = NULL;
	ft_lstdelone(third, free);
	// printf("Size after del: %d\n", ft_lstsize(first));
	return (0);
}
*/