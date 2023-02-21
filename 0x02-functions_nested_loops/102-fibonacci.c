#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 * Return: 0 (project success).
 */
int main(void)
{
int a;
long int l1, l2, l3;

l1 = 1;
l2 = 2;
printf("%ld, %ld", l1, l2);
for (a = 0; a < 48; a++)
{
l3 = l1 + l2;
printf(", %ld", l3);
l1 = l2;
l2 = l3;
}
printf("\n");
return (0);
}

