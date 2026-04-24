#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees a dog
* @d: Pointer to dog_t to free
*
* Description: Frees the memory allocated for a dog struct
* Frees name and owner first, then the struct itself
* If d is NULL, does nothing
*
* Return: Nothing
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
