#include "main.h"
/**
 *_strstr - locates a substring within a string
 *@haystack: pointer (address)
 *@needle: pointer (string)
 *Return: 0 (done)
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
int a;
int compare = 0;

if (*needle == 0)
{
return (haystack);
}
while (haystack[i] != 0)
{
j = 0;
a = i;
while (needle[j] != 0)
{
if (needle[j] == haystack[a])
{
compare = 1;
}
else
{
compare = 0;
break;
}
j++;
a++;
}
if (compare == 1)
{
return (haystack + i);
}
i++;
}
return (0);
}

