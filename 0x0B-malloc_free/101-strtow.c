#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * number - function to calculate number of words
 * @str: string being passed to check for words
 * Return: number of words
 */
int number(char *str)
{
int s;
int m = 0;

for (s = 0; str[s] != '\0'; s++)
{
if (*str == ' ')
str++;
else
{
for (; str[s] != ' ' && str[s] != '\0'; s++)
str++;
m++;
}
}
return (m);
}
/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
for (; i > 0;)
free(string[--i]);
free(string);
}

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
int total_words = 0, b = 0, c = 0, length = 0;
char **words, *found_word;

if (str == 0 || *str == 0)
return (NULL);
total_words = number(str);
if (total_words == 0)
return (NULL);
words = malloc((total_words + 1) * sizeof(char *));
if (words == 0)
return (NULL);
for (; *str != '\0' &&  b < total_words;)
{
if (*str == ' ')
str++;
else
{
found_word = str;
for (; *str != ' ' && *str != '\0';)
{
length++;
str++;
}
words[b] = malloc((length + 1) * sizeof(char));
if (words[b] == 0)
{
free_everything(words, b);
return (NULL);
}
while (*found_word != ' ' && *found_word != '\0')
{
words[b][c] = *found_word;
found_word++;
c++;
}
words[b][c] = '\0';
b++; c = 0; length = 0; str++;
}
}
return (words);
}
