#include "main.h"
/**
 * print_sign - prints the o with signed
 * @n: no of times
 * Return: (1) greater than zero (0)if is zero (-1)less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
