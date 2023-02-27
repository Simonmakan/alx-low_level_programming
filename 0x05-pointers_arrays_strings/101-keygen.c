#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - password gen
 * Return: (0) project done
 */
int main(void)
{
char c;
int x;

srand(time(0));
while (x <= 2645)
{
c = rand() % 128;
x += c;
putchar(c);
}
putchar(2772 - x);
return (0);
}

