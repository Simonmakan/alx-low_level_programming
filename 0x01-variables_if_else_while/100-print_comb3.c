#include <stdio.h>
#include <stdlib.h>
/**
 * main - inventing in a combination of brain and materials
 * Return: (0) (the project is done well)
 */
int main(void)
{
	int s;
	int m;

	m = 0;
	while (m < 10)
	{
		s = 0;
		while (s < 10)
		{
			if (m != s && m < s)
			{
				putchar('0' + s);
				putchar('0' + m);

				if (m + s != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
