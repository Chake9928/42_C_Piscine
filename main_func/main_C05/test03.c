#include <stdio.h>
#include <stdlib.h>
int	ft_recursive_power(int nb, int power);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		int n = ft_recursive_power(a, b);
		printf("%d\n", n);
	}
	return (0);
}
