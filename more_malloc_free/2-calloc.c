#include "main.h"

/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: Number of elements
* @size: Size of each element in bytes
*
* Return: Pointer to newly allocated memory initialized to zero
*         NULL if nmemb or size is 0
*         NULL if memory allocation fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned char *ptr;
unsigned int total_size, i;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

i = 0;
while (i < total_size)
{
ptr[i] = 0;
i++;
}

return (ptr);
}
