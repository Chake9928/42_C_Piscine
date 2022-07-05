void	ft_swap(int *a, int*b);
#include <stdio.h>

int	main(void)
{
	int	a = 3;
	int	b = 7;
	int a_ = a;
	int b_ = b;

	printf("In: a b = %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("Out:      %d %d\n", a, b);
	printf("Expected: %d %d\n", b_, a_);
	if (a != b_ || b != a_)
		return (1);
	printf("OK!\n");
	return (0);
}
