#include <stdio.h>
/**
 * main - all possible combinations
 * Return: (0) (project done well)
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
		if (s < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
