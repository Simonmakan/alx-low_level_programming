#include "main.h"
/**
 * leet - string encoede
 * @str: no
 * Return: (str)
 */
char *leet(char *str)
{
int s;
int m;
char c[] = "aAeEoOtTlL";
char n[] = "4433007711";

s = 0;
while (str[s] != '\0')
{
m = 0;
while (c[m] != '\0')
{
if (str[s] == c[m])
{
str[s] = n[m];
}
m++;
}
s++;
}
return (str);
}
