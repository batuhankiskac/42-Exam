#include <unistd.h>
#include <stdlib.h>

int final_len(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			len++;
		len++;
		i++;
	}
	return (len);
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char const *argv[])
{
	char *res;
	int i = 0, j = 0;

	if (argc == 2)
	{
		res = (char *)malloc(sizeof(char) * (final_len((char *)argv[1]) + 1));
		if (!res)
			return (1);
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				res[j++] = '_';
				res[j++] = argv[1][i] + 32;
			}
			else
			{
				res[j++] = argv[1][i];
			}
			i++;
		}
		res[j] = '\0';
		ft_putstr(res);
		free(res);
	}
	write(1, "\n", 1);
	return (0);
}
