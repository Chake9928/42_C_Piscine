#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str_input[] = {"ABCXYZ", "", "\6\3\5"};
	int		expected_output[] = {1, 1, 0};

	for (int i = 0; i < 3; ++i)
	{
		printf("<case%d>\n", i);
		printf("In:  str = %s\n", str_input[i]);
		int ret = ft_str_is_printable(str_input[i]);
		printf("Out:      %d\n", ret);
		printf("Expected: %d\n", expected_output[i]);
		if (ret == expected_output[i])
			printf("OK!\n");
		else
		{
			printf("Error!: expected %d, but got %d\n", expected_output[i], ret);
			return (1);
		}
	}
	return (0);
}
