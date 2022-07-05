#include <stdio.h>
#include <stdlib.h>
int	ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int a = atoi(argv[1]);
		int n = ft_fibonacci(a);
		printf("%d\n", n);
	}
	return (0);
}
