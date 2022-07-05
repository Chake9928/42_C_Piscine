void	ft_sort_int_tab(int *tab, int size);
#include <stdio.h>

int	main(void)
{
	int	a[] = {98, 34, 78, 56, 12};
	int a_[] = {12, 34, 56, 78, 98};
	printf("In:       %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	ft_sort_int_tab(a, 5);
	printf("Out:      %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("Expected: %d %d %d %d %d\n", a_[0], a_[1], a_[2], a_[3], a_[4]);
	if (a[0] != a_[0] || a[1] != a_[1] || a[2] != a_[2] || a[3] != a_[3] || a[4] != a_[4])
		return (1);
	printf("OK!\n");
	return (0);
}
