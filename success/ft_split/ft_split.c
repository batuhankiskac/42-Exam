#include <stdlib.h>

char ft_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int word_len(char *str)
{
	int i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}

int count_words(char *str)
{
	int count = 0;
	int i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
	}
	return (count);
}

char **ft_split(char *str)
{
	char **res;
	int i = 0;

	res = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!res)
		return (NULL);
	while (*str)
	{
		while (*str == ' ' || *str == '\t')
			str++;
		if (*str)
		{
			res[i] = (char *)malloc(sizeof(char) * (word_len(str) + 1));
			if (!res[i])
				return (NULL);
			ft_strncpy(res[i], str, word_len(str));
			str += word_len(str);
			i++;
		}
	}
	res[i] = NULL;
	return (res);
}
