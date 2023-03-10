#include <stdio.h>
#include <stdlib.h>
/**
 *main - main func.
 *Description: mult 2 no
 *@argc: arguments
 *@argv: array pointer
 *Return: (0 & 1)projec done
 */
int main(int argc, char *argv[])
{
int  s = argc - 1, m = s - 1, res;

if (s == 2)
{
res = atoi(argv[s]) * atoi(argv[m]);
printf("%d\n", res);
}
else
{
printf("Error\n");
return (s);
}
return (0);
}
