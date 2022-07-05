char	*ft_strcat(char *dest, char *src);
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* will be trace trap if there is no string size*/

	char s1[13] = "hello";
	char s2[10] = "piscine";

	strcat(s1, s2);
	printf("%s\n", s1);

	char t1[20] = "hello42";
	char t2[10] = "hellopiscine";

	printf("%s\n", ft_strcat(t1, t2));

	char y1[20] = "hello";
	char y2[10] = "42tokyo";

	printf("%s\n", strcat(y1, y2));
	printf("%s\n", ft_strcat(y1, y2));
}