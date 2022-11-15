#include "libft.h"
#include "stdio.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	n = ft_atoi(argv[1]);
		printf("res = %s", ft_itoa(n));
	}
	return (0);
}
