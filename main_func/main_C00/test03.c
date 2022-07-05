#include <stdio.h>

void	ft_print_numbers(void);

int	main(void)
{
	printf("Out:      ");
	fflush(stdout);
	ft_print_numbers();
	printf("\nExpected: 0123456789\n");
	return (0);
}
