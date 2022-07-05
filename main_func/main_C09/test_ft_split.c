#include <stdio.h>
char	**ft_split(char *str, char *charset);

int	main(void)
{
	char a[] = "hello42tokyo42piscine42";
	char b[] = "42";

	char **result = ft_split(a, b);
	while (*result)
	{
		printf("%s : ", *result);
		printf("%p\n", &*result);
		result++;
	}
	return (0);
}