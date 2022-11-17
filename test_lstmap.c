#include "libft.h"
#include "stdio.h"

void	*ft_map(void *c)
{
	int i;
	char	*tmp;

	i = -1;
	tmp = (char *)c;
	while (tmp[++i])
		if (tmp[i] == 'o')
			tmp[i] = 'a';
	return (c);
}

void	ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list	*node1 = ft_lstnew(ft_strdup("one"));
	t_list	*node2 = ft_lstnew(ft_strdup("two"));
	t_list	*node3 = ft_lstnew(ft_strdup("three"));
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	t_list	*new = ft_lstmap(node1, &ft_map, &ft_del);
	while (new)
	{
		printf("%s ", (char *)new->content);
		new = new->next;
	}
	return (0);
}
