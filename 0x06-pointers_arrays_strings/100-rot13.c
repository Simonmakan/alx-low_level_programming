#include "main.h"
/**
 * rot13 - string encode
 * @str: string aim
 * Return: (str)
 */
char *rot13(char *str)
{
int s;
int m;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

s = 0;
while (str[s] != '\0')
{
m = 0;
while (alpha[m] != '\0')
{
if (str[s] == alpha[m])
{
str[s] = rot[m];
break;
}
m++;
}
s++;
}
return (str);
}
