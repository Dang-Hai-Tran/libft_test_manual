#include "libft.h"
#include "stdio.h"

int main()
{
	char *dest = ft_strdup("hello word");
	char *src = ft_strdup("how are you");
	size_t size = 5;
	size_t len = ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%lu\n", len);
	return (0);
}
