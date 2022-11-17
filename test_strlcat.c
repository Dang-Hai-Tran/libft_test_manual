#include "libft.h"
#include "stdio.h"

int main()
{
	char *dest = ft_strdup("hello");
	char *src = ft_strdup("world");
	size_t size = 8;
	size_t len = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%lu\n", len);
	return (0);
}
