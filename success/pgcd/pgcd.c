#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int gcd = 1;
		int temp;
		while (b != 0)
		{
			temp = b;
			b = a % b;
			a = temp;
		}
		gcd = a;
		printf("%d", gcd);
	}
	printf("\n");
	return (0);
}
