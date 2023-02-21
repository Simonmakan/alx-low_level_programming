#include "main.h"
/**
 * print_last_digit - last dugit no.
 * @n: no of digits
 * Return: value
 */
int print_last_digit(int n)
{
	int no;

	no = n % 10;
	if (no < 0)
	{
		no = no * -1;
	}
	_putchar(no + '0');
	return (no);
}
