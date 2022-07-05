void	ft_ft(int *nbr);
#include <stdio.h>

int	main(void)
{
	int n;
	ft_ft(&n);
	printf("Out:      %d\n", n);
	printf("Expected: 42\n");
	if (n != 42)
		return (1);
	printf("OK!\n");
	return (0);
}
