void	ft_div_mod(int a, int b, int *div, int *mod);
#include <stdio.h>

int	main(void)
{
	int	a = 13;
	int	b = 5;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);

	printf("In:       a   b   = %d %d\n", a, b);
	printf("Out:      div mod = %d %d\n", div, mod);
	printf("Expected: div mod = %d %d\n", 2, 3);
	if (div != 2 || mod != 3)
		return (1);
	printf("OK!\n");
	return (0);
}
