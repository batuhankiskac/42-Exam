#include <unistd.h>

int main(int argc, char *argv[])
{
	char *str;
	char c1;
	char c2;
	int i = 0;

	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		str = argv[1];
		c1 = argv[2][0];
		c2 = argv[3][0];
		while (str[i])
		{
			if (str[i] == c1)
				str[i] = c2;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
