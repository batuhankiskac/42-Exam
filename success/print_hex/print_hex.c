#include <unistd.h>

int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void print_hex(int num)
{
	char *hex = "0123456789abcdef";
	if (num >= 16)
		print_hex(num / 16);
	write(1, &hex[num % 16], 1);
}

int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
	return (0);
}

