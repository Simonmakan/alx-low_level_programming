#include "main.h"
/**
 * _strcmp - two strings compararison
 * @s1: first string input
 * @s2: second string input
 * Return: 0 (project done)
 */
int _strcmp(char *s1, char *s2)
{
int s = 0, m = 0;

while (s1[s] != '\0' && m == 0)
{
m = s1[s] - s2[s];
s++;
}
return (m);
}
