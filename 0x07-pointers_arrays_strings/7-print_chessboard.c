#include "main.h"
/**
 *print_chessboard - prints a chessboard
 *@a: pointer
 *Return: (void)
 */
void print_chessboard(char (*a)[8])
{
int s, m;

for (s = 0; s < 8; s++)
{
for (m = 0; m < 8; m++)
{
_putchar(a[s][m]);
}
_putchar(10);
}
}
