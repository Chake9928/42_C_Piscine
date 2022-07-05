#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str_input[3][100] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un", "hello 123", "a"};
	char	expected_output[3][100] = {"Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un", "Hello 123", "A"};

	for (int i = 0; i < 3; ++i)
	{
		printf("<case%d>\n", i);
		printf("In: str = %s\n", str_input[i]);
		char *str_output = ft_strcapitalize(str_input[i]);
		printf("Out:      %s\n", str_output);
		printf("Expected: %s\n", expected_output[i]);
		if (strcmp(str_input[i], expected_output[i]))
		{
			printf("Error!: expected %s, but got %s\n", expected_output[i], str_input[i]);
			return (1);
		}
		printf("OK!\n");
	}
	return (0);
}
