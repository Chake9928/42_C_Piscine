char *ft_strdup(char *src);
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *dest1;
	char src1[] = "hello";
	dest1 = strdup(src1);
	printf("dest1 is %s\n", dest1);

	char *dest2;
	char src2[] = "hello";
	dest2 = ft_strdup(src2);
	printf("dest2 is %s\n", dest2);
}