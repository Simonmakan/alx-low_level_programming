#include "main.h"
/**
 * cap_string - make caps 
 * @str: strng to be capitalised
 * Return: (str) 
 */
char *cap_string(char *str)
{
int s, m;
char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

s = 0;
while (str[s] != '\0')
{
if (s == 0 && str[s] >= 97 && str[s] <= 122)
{
str[s] = str[s] - 32;
}
m = 0;
while (c[m] != '\0')
{
if (c[m] == str[s] && (str[s+ 1] >= 97 && str[s + 1] <= 122))
{
str[s + 1] = str[s + 1] - 32;
}
m++;
}
s++;
}
return (str);
}
