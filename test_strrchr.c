#include "libft.h"
#include "stdio.h"

int main()
{
	char *s = ft_strdup("hello word");
	int c = (int)'w';
	char *f = ft_strrchr(s, c);
	printf("%c\n", *f);
	printf("%c\n", *(s + 6));
	return (0);
}
