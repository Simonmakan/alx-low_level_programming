#include "main.h"
/**
 *_strlen_recursion - string length
 *@s: pointer
 *Return: (1)
 */
int _strlen_recursion(char *s)
{
int m = 0;

if (*s != 0)
{
m = _strlen_recursion(s + 1);
return (++m);
}
return (m);
}
/**
 *get_palindrome - (palindrome/not)
 *@s: pointer
 *@j: no of string
 *@i: length
 *Return: (1 & 0)
 */
int get_palindrome(char *s, int j, int i)
{
if (s[j] != s[i] && j < i)
{
return (0);
}
if (j >= i)
{
return (1);
}
return (get_palindrome(s, j + 1, i - 1));
}
/**
 *is_palindrome - palindrome/not
 *@s: pointer
 *Return: (1 & 0)
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
return (0);
}
return (get_palindrome(s, 0, _strlen_recursion(s) - 1));
}

