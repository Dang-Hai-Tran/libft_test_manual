#include "libft.h"
#include "stdio.h"

int main()
{
	t_list *node1 = ft_lstnew("one");
	printf("%s ", (char *)node1->content);
	printf("%p ", node1);
	return (0);
}
