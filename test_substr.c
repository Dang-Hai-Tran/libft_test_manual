#include "libft.h"
#include "stdio.h"

int main()
{
	char *s = ft_strdup("hello world");
	unsigned int start = 4;
	size_t len = 5;
	char *sub = ft_substr(s, start, len);
	printf("%s", sub);
}
