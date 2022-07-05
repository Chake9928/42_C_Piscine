#include <stdio.h>

int	check_strlen(char *str);
int ft_any(char **tab, int(*f)(char*));

int main()
{
	int		num = 0;
	char	*str[] = {"You", "Hello", NULL};

	num = ft_any(str, &check_strlen);

	printf("num: %d\n", num);

	return (0);
}


// *fのための関数
// 引数の文字列が5文字以上なら1を返し、5文字以下なら0を返す
int	check_strlen(char *str)
{
	int		strlen;

	strlen = 0;
	while (*str != '\0')
	{
		strlen += 1;
		str++;
	}
	if (strlen >= 5)
		return (1);
	return (0);
}