// header
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/*
int	main(void)
{
	t_list	*node;
	char	str[] = "Bardosha";

	node = ft_lstnew(str); // Создаем узел и сохраняем его адрес в node
	if (node)
	{
		// Печатаем контент, приведя его к (char *), так как printf должен знать тип
		printf("Content in node: %s\n", (char *)(node->content));
		
		// Проверяем, что next действительно NULL
		if (node->next == NULL)
			printf("Next is NULL, as expected!\n");
            
		// Не забываем освободить память в конце теста
		free(node);
	}
	return (0);
}
*/