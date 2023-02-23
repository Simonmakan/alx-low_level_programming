#include <stdio.h>
/**
 * main  -fizz buzz
 * Return: 0 (task done well)
 */
int main(void)
{
int s = 0;
int m;
int n;

for (s = 1; s < 101; s++)
{
m = s % 3;
n = s % 5;
if (m == 0 && n == 0)
printf("FizzBuzz");
else if (n == 0 && m != 0)
printf("Buzz");
else if (m == 0 && n != 0)
printf("Fizz");
else
printf("%d", s);
if (s < 100)
putchar(' ');
}
putchar('\n');
return (0);
}
