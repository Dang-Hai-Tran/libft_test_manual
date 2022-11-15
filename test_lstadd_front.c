#include "libft.h"
#include "stdio.h"

int main()
{
	t_list *node1 = ft_lstnew("one");
	t_list *node2 = ft_lstnew("two");
	t_list *node3 = ft_lstnew("three");
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
	t_list *tmp = node3;
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
