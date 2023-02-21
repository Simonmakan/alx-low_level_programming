#include "main.h"
/**
 * _isalpha - checks apha characters
 * @c: -no of xters
 * Return: (1) loer / upper (0) otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
