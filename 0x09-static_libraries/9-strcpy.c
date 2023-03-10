#include "main.h"
/**
 * char *_strcpy - copies sting pointed
 * @dest: buffer pointed
 * @src: null terminate
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
char *guard = dest;

while (*src)
{
*dest++ = *src++;
*dest = 0;
}
return (guard);
}
