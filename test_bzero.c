#include "libft.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*str = argv[1];
		size_t	n = ft_atoi(argv[2]);
		printf("str = %s\n", str );
		printf("new str = %s", str + n);
	}
	return (0);
}
