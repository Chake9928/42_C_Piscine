#include <stdio.h>

void	ft_putchar(char c);

int	main(void)
{
	char c = 'b';
	printf("In:  %c\n", c);
	printf("Out: ");
	fflush(stdout);
	ft_putchar(c);
	printf("\n");
	return (0);
}
