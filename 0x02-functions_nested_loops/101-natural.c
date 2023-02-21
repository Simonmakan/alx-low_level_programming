#include <stdio.h>
/**
 * main - list natural numbers
 * Return: (0) (atsk daone)
 */
int main(void)
{
	int a, b;

	b = 0;
	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}
