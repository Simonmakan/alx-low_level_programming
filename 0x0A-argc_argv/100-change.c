#include <stdio.h>
#include <stdlib.h>
/**
 *main - main func
 *Description: min no. of coins
 *@argc: arguments
 *@argv: array pointer
 *Return: (min no.)
 */
int main(int argc, char *argv[])
{
int s = 0, m = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
m = atoi(argv[1]);
while (m > 0)
{
if (m - 25 >= 0)
{
m = m - 25;
}
else if (m - 10 >= 0)
{
m = m - 10;
}
else if (m - 5 >= 0)
{
m = m - 5;
}
else if (m - 2 >= 0)
{
m = m - 2;
}
else if (m - 1 == 0)
{
m = m - 1;
}
s++;
}
printf("%d\n", s);
return (0);
}
