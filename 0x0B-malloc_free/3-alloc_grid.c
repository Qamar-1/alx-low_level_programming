#include "main.h"
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * alloc_grid - Allocates memory for a 2D array of integers and initializes
 * each element to 0.
 * @width: The number of elements in each row (width of each 1D array).
 * @height: The number of rows (number of 1D arrays).
 * Return: If successful, a pointer to the allocated 2D array; otherwise, NULL.
 */
int **alloc_grid(int width, int height)
{
int i,j;
UNUSED(j);
int** grid= (int**)malloc(height * sizeof(int*));
if (width <= 0 || height <= 0)
return NULL;
if (grid == NULL)
return NULL;
for (i = 0; i < height; i++)
{
grid[i] = (int*)malloc(width* sizeof(int*);
}
if(grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return NULL;
}

for (int i = 0; i < height; i++) {
 for (int j = 0; j < width; j++) {
grid[i][j] = 0;
}
 }
return grid;

}

