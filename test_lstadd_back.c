#include "libft.h"
#include "stdio.h"

int main()
{
	t_list *node1 = ft_lstnew("one");
	t_list *node2 = ft_lstnew("two");
	t_list *node3 = ft_lstnew("three");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	t_list *tmp = node1;
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
