#include <stdio.h>
/**
 * main - prints first ninty eight fibonacci
 * Return: 0 (task done)
 */
int main(void)
{
	int count;
	unsigned long no1h1, no1h2, no2h2, no2h1;
	unsigned long no1 = 0, no2 = 1, total;
	unsigned long h1, h2;
	int a;

	count = a;
	for (a = 0; a < 92; a++)
	{
		total = no1 + no2;
		printf("%lu, ", total);
		no1 = no2;
		no2 = total;
	}
	no1h1 = no1 / 10000000000;
	no2h1 = no2 / 10000000000;
	no1h2 = no1 % 10000000000;
	no2h2 = no2 % 10000000000;
	for (a = 93; a < 99; a++)
	{
		h1 = no1h1 + no2h1;
		h2 = no1h2 + no2h2;
		if (no1h2 + no2h2 > 9999999999)
	{
		h1 += 1;
		h2 %= 10000000000;
	}
	printf("%lu%lu", h1, h2);
	if (a != 98)
		printf(", ");
	no1h1 = no2h1;
	no1h2 = no2h2;
	no2h1 = h1;
	no2h2 = h2;
		}
	printf("\n");
	return (0);
}
