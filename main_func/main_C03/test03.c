char	*ft_strncat(char *dest, char *src, unsigned int nb);
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* will be trace trap if there is no string size*/

	char s1[20] = "hello";
	char s2[10] = "piscine";

	strncat(s1, s2, 2);
	printf("%s\n", s1);

	char t1[20] = "hello";
	char t2[10] = "piscine";

	printf("%s\n", ft_strncat(t1, t2, 2));

	char y1[20] = "hello";
	char y2[10] = "42tokyo";

	printf("%s\n", strncat(y1, y2, 2));
	printf("%s\n", ft_strncat(y1, y2, 2));
}