#include <unistd.h>

int is_hidden(char *hidden, char *str)
{
	int i = 0, j = 0;

	while (str[i])
	{
		if (str[i] == hidden[j])
			j++;
		if (!hidden[j])
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	char *hidden = argv[1];
	char *str = argv[2];
	if (argc == 3)
	{
		if (*hidden == '\0')
			write(1, "1", 1);
		else if (is_hidden(hidden, str))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
