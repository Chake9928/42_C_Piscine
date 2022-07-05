char	*ft_strstr(char *str, char *to_find);
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[] = "hello42tokyopiscine";
	char to_find1[] = "42tokyo";
	printf("%s\n", strstr(str1, to_find1));

	char str2[] = "hello42tokyopiscine";
	char to_find2[] = "42tokyo";
	printf("%s\n", ft_strstr(str2, to_find2));
}