#include "libft.h"
#include "stdio.h"

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void	ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list	*node1 = ft_lstnew("one");
	t_list	*node2 = ft_lstnew("two");
	t_list	*node3 = ft_lstnew("three");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	t_list	*new = ft_lstmap(node1, &ft_map, &ft_del);
	while (new)
	{
		printf("%s", (char *)new->content);
		new = new->next;
	}
	return (0);
}
