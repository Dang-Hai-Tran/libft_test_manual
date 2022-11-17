#include "libft.h"
#include "stdio.h"

int main()
{
	char	*s = "hello how are you?";
	char	*ptr = ft_memchr(s, (int)'o', 10);
	printf("%p ", ptr);
	printf("%c ", (char)*ptr);
	return (0);
}
