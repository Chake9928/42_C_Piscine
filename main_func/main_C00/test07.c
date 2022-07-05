#include <stdio.h>

void	ft_putnbr(int);

int	main(void)
{
	int		input[] = {42, -42, 0, 2147483647, -2147483647};
	for (int i = 0; i < 5; ++i)
	{
		printf("<case%d>\n", i);
		printf("In:       n = %d\n", input[i]);
		printf("Out:      ");
		fflush(stdout);
		ft_putnbr(input[i]);
		printf("\nExpected: %d\n", input[i]);
	}
	return (0);
}
