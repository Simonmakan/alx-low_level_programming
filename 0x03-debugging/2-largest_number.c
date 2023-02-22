#include "holberton.h"

/**
 * largest_number - prints the largest no
 * @a: first no
 * @b: sec no
 * @c: last no
 * Return: no (largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
