//header
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lsn;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lsn = ft_lstlast(*lst);
	lsn -> next = new;
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

	ft_lstadd_front(&second, first);
	ft_lstadd_back(&second, third); // &lst, new

	printf("FN: %s\n", (char *)first->content);
	printf("SN: %s\n", (char *)first->next->content);
	printf("TN: %s\n", (char *)first->next->next->content);

	printf("Together: ");
	printf("%s", (char *)first->content);
	printf("%s", (char *)first->next->content);
	printf("%s\n", (char *)first->next->next->content);
	return (0);
}
*/