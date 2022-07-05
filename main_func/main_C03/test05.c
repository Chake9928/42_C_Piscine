unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
#include <string.h>
#include <stdio.h>

int main(void)
{
	char dest1[] = "hello world";
	char src1[] = "and 42tokyo piscine";
	printf("%lu\n", strlcat(dest1, src1, 12));
	printf("%s\n", dest1);

	char dest2[] = "hello world";
	char src2[] = "and 42tokyo piscine";
	printf("%u\n", ft_strlcat(dest2, src2, 12));
	printf("%s\n", dest2);
}