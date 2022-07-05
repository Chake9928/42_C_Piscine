void	ft_rev_int_tab(int *tab, int size);
#include <stdio.h>

int	main(void)
{
	int	a[] = {12, 34, 56, 78, 90};
	int	a_[] = {90, 78, 56, 34, 12};
	printf("In:       %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	ft_rev_int_tab(a, 5);
	printf("Out:      %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("Expected: %d %d %d %d %d\n", a_[0], a_[1], a_[2], a_[3], a_[4]);
	if (a[0] != a_[0] || a[1] != a_[1] || a[2] != a_[2] || a[3] != a_[3] || a[4] != a_[4])
		return (1);
	printf("OK!\n");
	return (0);
}
