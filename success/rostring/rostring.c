#include <unistd.h>
#include <stdlib.h>

char *rot_one_word(char *str)
{
	char *first_word_start;
	char *first_word_end;
	char *res;
	int i = 0, len = 0;

	while (str[len])
		len++;
	while (*str == ' ' || *str == '\t')
		str++;
	first_word_start = str;
	while (*str && *str != ' ' && *str != '\t')
		str++;
	first_word_end = str;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (*str)
	{
		while (*str == ' ' || *str == '\t')
			str++;
		if (*str)
		{
			if (i > 0)
				res[i++] = ' ';
			while (*str && *str != ' ' && *str != '\t')
				res[i++] = *str++;
		}
	}
	if (i > 0 && first_word_start < first_word_end)
		res[i++] = ' ';
	while (first_word_start < first_word_end)
		res[i++] = *first_word_start++;
	res[i] = '\0';
	return (res);
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int main(int argc, char const *argv[])
{
	char *rot;

	if (argc > 1)
	{
		rot = rot_one_word((char *)argv[1]);
		ft_putstr(rot);
		free(rot);
	}
	write(1, "\n", 1);
	return (0);
}
