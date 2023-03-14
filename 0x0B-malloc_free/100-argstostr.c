#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr - conc arguments
 *char
 *@ac: counter
 *@av: vector
 *Return: pointer
 */
char *argstostr(int ac, char **av)
{
int s, m, n = 0, length = 0;
char *p;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (s = 0; s < ac; s++)
{
for (m = 0; av[s][m] != '\0'; m++)
{
length++;
}
length++;
}
length++;
p = malloc(sizeof(char) * length);
if (p == NULL)
{
return (NULL);
}
for (s = 0; s < ac; s++)
{
for (m = 0; av[s][m] != 0; m++)
{
p[n] = av[s][m];
n++;
}
p[n] = 10;
n++;
}
p[n] = 0;
return (p);
}
