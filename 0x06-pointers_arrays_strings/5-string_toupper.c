#include "main.h"
/**
 * string_toupper -lowercase to uppercase cahnge
 * @str: changer
 * Return: (str)
 */
char *string_toupper(char *str)
{
int s;

s = 0;
while (str[s] != '\0')
{
if (str[s] >= 97 && str[s] <= 122)
{
str[s] = str[s] - 32;
}
s++;
}
return (str);
}
