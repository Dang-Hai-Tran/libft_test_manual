#include "libft.h"
#include "stdio.h"

int main()
{
	char *haystack = ft_strdup("hello world");
	char *needle = ft_strdup("llo");
	char *in = ft_strnstr(haystack, needle, 8);
	printf("%c\n", *in);
	printf("%p\n", in);
	return (0);
}
