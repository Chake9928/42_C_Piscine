#include <stdio.h>

void	ft_print_alphabet(void);

int	main(void)
{
	printf("Out:      ");
	fflush(stdout);
	ft_print_alphabet();
	printf("\nExpected: abcdefghijklmnopqrstuvwxyz\n");
	return (0);
}
