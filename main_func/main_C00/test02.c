#include <stdio.h>

void	ft_print_reverse_alphabet(void);

int	main(void)
{
	printf("Out:      ");
	fflush(stdout);
	ft_print_reverse_alphabet();
	printf("\nExpected: zyxwvutsrqponmlkjihgfedcba\n");
	return (0);
}
