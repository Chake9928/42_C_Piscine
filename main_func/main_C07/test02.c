
int	ft_ultimate_range(int **range, int min, int max);
#include <stdio.h>

int	main(void)
{
	int range0 = 10;
	int *range1 = &range0;
	int **range2 = &range1;
	int max = 20;
	int min = 1;
	int result = ft_ultimate_range(range2, min, max);
	int i;

	printf("%d\n", result);

	i = 0;
	while (i < 20)
	{
		printf("%d ", range1[i]);
		i++;
	}
}