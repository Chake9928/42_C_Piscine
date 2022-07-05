int *ft_range(int min, int max);
#include <stdio.h>

int	main(void)
{
	int max = 10;
	int min = 1;
	int *result = ft_range(min, max);

	int i = 0;

	while (i < 10)
	{
		printf("%d ", result[i]);
		i++;
	}

}