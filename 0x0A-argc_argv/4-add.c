#include <stdio.h>
#include <stdlib.h>
/**
 *main - main func.
 *Description: Add (+) no
 *@argc: arguments
 *@argv: array pointer
 *Return: (sum)(0) & (1)
 */
int main(int argc, char *argv[])
{
int s;
int m, sum = 0;

if (argc == 1)
{
printf("0\n");
}
else
{
for (s = 1; s < argc; s++)
{
for (m = 0; argv[s][m] != 0; m++)
{
if (argv[s][m] > 58 || argv[s][m] < 47)
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[s]);
}
printf("%d\n", sum);
}
return (0);
}

