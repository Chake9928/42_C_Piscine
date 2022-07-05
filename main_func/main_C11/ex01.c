#include <stdio.h>

int	check_num(int num);
int	*ft_map(int *tab, int length, int(*f)(int));

int	main()
{
	int int_arr[3] = {1, 2, 3};
	int	*new_arr;
	int	i;

	new_arr = ft_map(int_arr, 3, &check_num);
	i = 0;
	while (i < 3)
	{
		printf("%d ", new_arr[i]);
		i++;
	}
	
	return 0;
}

// *fのための関数
// int型配列要素を受け取り2未満なら0、2以上なら1を出力する関数
int	check_num(int num)
{
	if (num < 2)
		return (0);
	return (1);
}
