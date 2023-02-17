#include <stdio.h>
#include <stdlib.h>
/**
 * main - inventing in a combination of brain and materials
 * Return: (0) (the project is done well)
 */
int main(void)
{
	int c;
	int d;

	d = 0;
	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
