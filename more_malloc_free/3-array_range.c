#include "main.h"

/**
* array_range - Creates an array of integers from min to max
* @min: Minimum value
* @max: Maximum value
*
* Return: Pointer to newly allocated array with all integers from min to max
*         NULL if min > max or malloc fails
*/
int *array_range(int min, int max)
{
int *arr;
int i;
int size;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(size * sizeof(int));

if (arr == NULL)
return (NULL);

i = 0;
while (i < size)
{
arr[i] = min + i;
i++;
}

return (arr);
}
