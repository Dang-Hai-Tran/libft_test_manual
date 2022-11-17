#include "libft.h"
#include "stdio.h"

int main()
{
	char *s1 = ft_strdup("hello ");
	char *s2 = ft_strdup("world");
	char *join = ft_strjoin(s1, s2);
	printf("%s", join);
	return (0);
}
