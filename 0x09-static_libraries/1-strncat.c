#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int s, m;

s = 0;
while (dest[s] != 0)
{
s++;
}
m = 0;
while (src[m] != 0 && m < n)
{
dest[s] = src[m];
s++;
m++;
}
return (dest);
}
