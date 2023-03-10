#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Description: arguments & new line
 *@argc: arguments
 *@argv: array pointer
 *Return: 0
 */
int main(int argc, char *argv[])
{
int s;

for (s = 0; s < argc; s++)
{
printf("%s\n", argv[s]);
}
return (0);
}
