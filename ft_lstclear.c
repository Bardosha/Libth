//header
#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst != NULL)
	{
		tmp = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
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

	ft_lstclear(&first, free);
	printf("After clear: %p\n", (void *)first);
	return (0);
}
// *lst = tmp
// Потому что *lst после ft_lstdelone смотрит на удалённый узел. 
// Нужно передвинуть его на следующий.
// tmp хранит адрес следующего узла — ты его сохранила до удаления.
// Теперь говоришь *lst = tmp — и *lst смотрит на следующий живой узел.
// Без этого *lst всегда смотрит на одно и то же место — цикл бесконечный.
*/