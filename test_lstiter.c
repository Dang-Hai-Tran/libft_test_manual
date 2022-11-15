#include "libft.h"
#include "stdio.h"
void	ft_f(void *content)
{
	printf("%s\n", (char *)content);
}
int main()
{
	t_list *node1 = ft_lstnew("one");
	t_list *node2 = ft_lstnew("two");
	t_list *node3 = ft_lstnew("three");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstiter(node1, &ft_f);
	t_list *tmp = node1;
	return (0);
}
