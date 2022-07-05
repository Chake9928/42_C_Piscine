void	ft_ultimate_div_mod(int *a, int*b);
#include <stdio.h>

int	main(void)
{
	int	a = 13;
	int	b = 5;

	printf("In:       a   b   = %d %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Out:      div mod = %d %d\n", a, b);
	printf("Expected: div mod = %d %d\n", 2, 3);
	if (a != 2 || b != 3)
		return (1);
	printf("OK!\n");
	return (0);
}
