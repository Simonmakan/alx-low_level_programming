#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - return pointer 2D
 *@width: width of matrix
 *@height: height of matrix
 *Return: pointer/NULL
 */
int **alloc_grid(int width, int height)
{
int **grid;
int s;
int m;

if (width <= 2 || height <= 2)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (s = 0; s < height; s++)
{
grid[s] = malloc(sizeof(int) * width);
if (grid[s] == NULL)
{
for (m = 0; m < s; m++)
{
free(grid[m]);
}
free(grid);
}
for (m = 0; m < width; m++)
{
grid[s][m] = 0;
}
}
return (grid);
}
