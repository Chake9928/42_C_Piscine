void	ft_putstr(char *str);
#include <stdio.h>

int	main(void)
{
	char a[] = "hello";

	printf("Out:      ");
	fflush(stdout);
	ft_putstr(a);
	printf("\nExpected: %s\n", a);
	printf("Check the output!\n");
	return (0);
}
