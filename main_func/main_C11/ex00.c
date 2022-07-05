#include <unistd.h>

int	check_num(int nb);
void	print_num(int *num_arr, int i);
void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void(*f)(int));



int main()
{
	int	int_arr[3] = {1, 2, 3};

	ft_foreach(int_arr, 3, &ft_putnbr);
	return (0);
}

int	check_num(int nb)
{
	int		num;

	if (nb < 0)
	{
		write(1, "-", 1);
		num = nb * (-1);
		return (num);
	}
	else
		return (nb);
}

void	print_num(int *num_arr, int i)
{
	char	num_char;

	while (i <= 9)
	{
		num_char = num_arr[i] + '0';
		write(1, &num_char, 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		num_arr[10];

	i = 9;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		nb = check_num(nb);
		while (i >= 0)
		{
			if (nb < 1)
				break ;
			num_arr[i] = nb % 10;
			nb /= 10;
			i--;
		}
		i++;
		print_num(num_arr, i);
	}
}
