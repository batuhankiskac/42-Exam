#include <unistd.h>

int main(int argc, char const *argv[])
{
	char *str = argv[1];
	int i = 0;
	if (argc == 2)
	{
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
				str[i] += 1;
			else if (str[i] == 'z')
				str[i] = 'a';
			else if (str[i] == 'Z')
				str[i] = 'A';
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

