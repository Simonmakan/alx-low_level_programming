#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - matrix free
 * @grid: matrix
 * @height: height
 * Return: (void)
 */
void free_grid(int **grid, int height)
{
int s;

for (s = 0; s < height; s++)
free(grid[s]);
free(grid);
}
