#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: - no of characters
 * Return: (1) (lower) and (0) (upper)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
