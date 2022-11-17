#include "libft.h"
#include "stdio.h"

char	ft_f(unsigned int i, char c)
{
	return (c + 1);
}

int main()
{
	char *s = ft_strdup("hello world");
	char *buf = ft_strmapi(s, &ft_f);
	printf("%s\n", buf);
	return (0);
}
