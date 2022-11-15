#include "libft.h"
#include "stdio.h"

void	ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list *node1 = ft_lstnew(ft_strdup("one"));
	t_list *node2 = ft_lstnew(ft_strdup("two"));
	t_list *node3 = ft_lstnew(ft_strdup("three"));
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstdelone(node3, &ft_del);
	t_list *tmp = node1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
