#include <unistd.h>

int main(int argc, char const *argv[])
{
	char *str = argv[1];
	if (argc == 2)
	{
		while (*str)
		{
			if (*str >= 'A' && *str <= 'Z')
				*str += 32;
			else if (*str >= 'a' && *str <= 'z')
				*str -= 32;
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
