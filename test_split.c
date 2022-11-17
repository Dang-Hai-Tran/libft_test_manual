#include "libft.h"
#include "stdio.h"

int main()
{
	char	*str = ft_strdup("hello. how are you");
	char	c = 'o';
	char	**tab;
	tab = ft_split(str, c);
	int 	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
