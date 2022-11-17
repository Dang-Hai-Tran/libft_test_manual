#include "libft.h"
#include "stdio.h"

int	main()
{
	char *dest = ft_strdup("hello world.");
	char *src = ft_strdup("how are you");
	char *new = ft_memcpy(dest, src, 4);
	printf("%s", new);
	return (0);
}
