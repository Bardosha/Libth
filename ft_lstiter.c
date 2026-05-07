//header
#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*
void    to_upper(void *content)
{
    char    *str;
    int     i;

    str = (char *)content;
    i = 0;
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
}

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

	printf("\n");
	ft_lstiter(first, to_upper);
	printf("FN: %s\n", (char *)first->content);
	printf("SN: %s\n", (char *)first->next->content);
	printf("TN: %s\n", (char *)first->next->next->content);
	return (0);
}
*/