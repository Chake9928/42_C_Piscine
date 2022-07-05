#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "abc";
	char	dest[] = "defghi";
	printf("In:  src = %s, dest = %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("Out: src = %s, dest = %s\n", src, dest);
	printf("Check the output!\n");

	return (0);
}
