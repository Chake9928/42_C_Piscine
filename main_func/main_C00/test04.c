#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	int		input[] = {3, 0, -3};
	char	expected_output[] = {'P', 'P', 'N'};
	for (int i = 0; i < 3; ++i)
	{
		printf("<case%d>\n", i);
		printf("In:       n = %d\n", input[i]);
		printf("Out:      ");
		fflush(stdout);
		ft_is_negative(input[i]);
		printf("\nExpected: %c\n", expected_output[i]);
	}
	return (0);
}
