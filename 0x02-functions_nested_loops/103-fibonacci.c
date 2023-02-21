#include <stdio.h>
/**
 * main - new term sequence
 * Return: 0 (work done)
 */
int main(void)
{
	int a = 0;
	long j = 1, k = 2, total = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			total += k;
		j = k - j;
		++a;
	}
	printf("%ld\n", total);
	return (0);
}
