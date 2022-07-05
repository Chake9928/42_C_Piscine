int	ft_strcmp(char *s1, char *s2);
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[] = "hello";
	char s2[] = "piscine";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));

	char t1[] = "hello";
	char t2[] = "hello";

	printf("%d\n", strcmp(t1, t2));
	printf("%d\n", ft_strcmp(t1, t2));

	char y1[] = "hello42tokyo";
	char y2[] = "hello";

	printf("%d\n", strcmp(y1, y2));
	printf("%d\n", ft_strcmp(y1, y2));
}