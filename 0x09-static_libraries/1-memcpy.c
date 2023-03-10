#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: pointer (receiver)
 *@src: pointer (copied)
 *@n: x times to be copied
 *Return: (dest) project done well
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int s;

for (s = 0; s < n; s++)
{
dest[s] = src[s];
}
return (dest);
}
