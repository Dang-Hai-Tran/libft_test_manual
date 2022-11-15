#include "libft.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char		*str = argv[1];
		long long	res = ft_atoi(str);
		printf("res = %lld", res);
	}
	return (0);
}
