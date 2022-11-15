#include "libft.h"
#include "stdio.h"

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		size_t	count = ft_atoi(argv[1]);
		size_t	size = ft_atoi(argv[2]);
		char	*buf = ft_calloc(count, size);
		char	*str = ft_memset(buf, 67, count);
		printf("str = %s", str);
	}
	return (0);
}
