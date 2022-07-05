int	ft_strncmp(char *s1, char *s2, unsigned int n);
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "hello";
	char s2[] = "piscine";

	printf("%d\n", strncmp(s1, s2, 10));
	printf("%d\n", ft_strncmp(s1, s2, 10));

	char t1[] = "piscine";
	char t2[] = "hello";

	printf("%d\n", strncmp(t1, t2, 3));
	printf("%d\n", ft_strncmp(t1, t2, 3));

	char y1[] = "hello";
	char y2[] = "hell";

	printf("%d\n", strncmp(y1, y2, 4));
	printf("%d\n", ft_strncmp(y1, y2, 4));
}