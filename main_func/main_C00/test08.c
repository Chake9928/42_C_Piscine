#include <stdio.h>

void	ft_print_combn(int);

int	main(void)
{
	int n = 3;
	printf("In: n = %d\n", n);
	fflush(stdout);
	ft_print_combn(3);
	printf("\n");
	return (0);
}
