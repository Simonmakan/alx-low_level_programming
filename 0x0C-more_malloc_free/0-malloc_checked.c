#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - memory allocation
 *@b: mem size
 *Return: (ptr)
 */
void *malloc_checked(unsigned int b)
{
void *s;

s = malloc(b);
if (s == NULL)
{
exit(98);
}
return (s);
}
