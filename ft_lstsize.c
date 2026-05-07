// header
#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		hmn;

	hmn = 0;
	while (lst != NULL)
	{
		hmn++;
		lst = lst -> next;
	}
	return (hmn);
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
	return (0);
}
*/