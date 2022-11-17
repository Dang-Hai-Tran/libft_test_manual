#include "libft.h"
#include "stdio.h"

int main()
{
	char	*s1 = "hello";
	char	*s2 = "hi";
	printf("%d ", ft_memcmp(s1, s2, 5));
	printf("%d ", ft_memcmp(s1, s2, 1));
	return (0);
}
