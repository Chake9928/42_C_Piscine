#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));
int	ft_cmp(int num1, int num2);

int main()
{
	int		flag = 0;
	int		int_arr[5] = {1, 4, 4, 4, 1};

	flag = ft_is_sort(int_arr, 5, &ft_cmp);

	printf("flag: %d\n", flag);

	return (0);
}

int	ft_cmp(int num1, int num2)
{
	if (num1 < num2)
		return (-1);
	else if (num1 == num2)
		return (0);
	else
		return (1);
}

