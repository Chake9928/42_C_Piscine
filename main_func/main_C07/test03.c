char	*ft_strjoin(int size, char **strs, char *sep);
#include <stdio.h>


int	main(void)
{
	char *strs[] = {"hello", "world", "tokyo", "piscine"};
	char sep[] = "42";

	printf("%s", ft_strjoin(4, strs, sep));
}

/*
int	main(void)
{
	char *strs2[] = {"", "", ""};
	char sep2[] = "";

	printf("%s", ft_strjoin(3, strs2, sep2));
}
*/
