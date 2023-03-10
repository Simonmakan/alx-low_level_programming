#include "main.h"
/**
 * _strncpy - string copy
 * @dest: array that returns
 * @src: receive string
 * @n: no of times
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
int s;

s = 0;
while (s < n && src[s] != '\0')
{
dest[s] = src[s];
s++;
}
s = s;
while (s < n)
{
dest[s] = '\0';
s++;
}
return (dest);
}
