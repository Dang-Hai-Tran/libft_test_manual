#include "libft.h"
#include "stdio.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	c = ft_atoi(argv[1]);
		printf("res = %d", ft_isascii(c));
	}
	return (0);
}
