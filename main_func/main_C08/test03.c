#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point test;
	set_point(&test);
	printf("test.x is %d\n", test.x);
	printf("test.y is %d\n", test.y);
	return (0);
}