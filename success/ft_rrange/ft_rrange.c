#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	i = 0;
	int size;

	if (start < end)
	{
		size = end - start + 1;
		range = (int *)malloc(sizeof(int) * size);
		while (start <= end)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		size = start - end + 1;
		range = (int *)malloc(sizeof(int) * size);
		while (start >= end)
		{
			range[i] = end;
			end++;
			i++;
		}
	}
	return (range);
}
