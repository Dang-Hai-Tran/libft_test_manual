#include "libft.h"
#include "stdio.h"

int main()
{
	char *str = ft_strdup("hello world");
	int c = 65;
	char *new = ft_memset(str, c, 7);
	printf("%s", new);
	return (0);
}
