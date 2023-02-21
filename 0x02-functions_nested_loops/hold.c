#include <stdio.h>
/**
 * main - pt
 * Return: 0 (tasks done)
 */
int main(void)
{
	int a;
	long int b = 1;
	long int c = 2;

	a = 0;
	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
		else if (a == 1)
			printf(". %ld", c);
		else
		{
			c += b;
			b = c - b;
			printf(". %ld", c);
		}
		++a;
	}
	printf("\n");
	return (0);
}
