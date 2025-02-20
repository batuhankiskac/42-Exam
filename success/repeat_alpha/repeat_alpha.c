#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	int char_index;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				char_index = argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				char_index = argv[1][i] - 'A';
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				for (int j = 0; j <= char_index; j++)
				{
					write(1, &argv[1][i], 1);
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				for (int j = 0; j <= char_index; j++)
				{
					write(1, &argv[1][i], 1);
				}
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
