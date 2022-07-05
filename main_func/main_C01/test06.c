int	ft_strlen(char *str);
#include <stdio.h>

int	main(void)
{
	char a[] = "helloworld";

	int n = ft_strlen(a);
	printf("In: str = %s\n", a);
	printf("Out:      n = %d\n", n);
	printf("Expected: n = %d\n", 10);
	if (n != 10)
		return (1);
	printf("OK!\n");
	return (0);
}
