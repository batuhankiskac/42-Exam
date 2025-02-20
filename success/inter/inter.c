#include <unistd.h>

int is_seen(char *s, char c, int index)
{
	int i = 0;

	while (s[i] && i < index)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	int i = 0;
	int j;

	if (argc == 3)
	{
		char *s1 = argv[1];
		char *s2 = argv[2];
		while (s1[i])
		{
			j = 0;
			while (s2[j])
			{
				if (s1[i] == s2[j] && !is_seen(s1, s1[i], i))
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
