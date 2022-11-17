#include "libft.h"
#include "stdio.h"
void	ft_f(unsigned int i, char *s)
{
	*(s) = 'a';
}

int main()
{
	char *s = ft_strdup("hello world");
	ft_striteri(s, &ft_f);
	printf("%s", s);
	return (0);
}
