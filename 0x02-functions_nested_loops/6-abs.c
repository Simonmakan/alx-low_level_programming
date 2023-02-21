#include "main.h"
/**
 * _abs  - computes absolute value
 * @c: no of values
 * Return: (1)posiyive (-1) negative
 */
int _abs(int c)

{
	if (c < 0)
	{
		int abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
