#include "libft.h"
#include "stdio.h"

int main()
{
	char *s1 = ft_strdup("hello world");
	char *set = ft_strdup("hld");

	char *trim = ft_strtrim(s1, set);
	printf("%s", trim);
	return (0);
}
