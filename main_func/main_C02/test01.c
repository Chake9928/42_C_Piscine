#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "abc";
	char	dest[] = "defghi";
	int		n = 2;
	printf("<case1>\n");
	printf("In:  src = %s, dest = %s, n = %d\n", src, dest, n);
	ft_strncpy(dest, src, n);
	printf("Out: src = %s, dest = %s\n", src, dest);
	printf("Check the output!\n");
	
	char	src2[] = "abc";
	char	dest2[] = "defghi";
	n = 4;
	printf("<case2>\n");
	printf("In:  src = %s, dest = %s, n = %d\n", src2, dest2, n);
	ft_strncpy(dest2, src2, n);
	printf("Out: src = %s, dest = %s\n", src2, dest2);
	printf("Check the output!\n");

	return (0);
}
