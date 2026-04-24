#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* _strlen - Returns the length of a string
* @s: String to measure
*
* Return: Length of string
*/
int _strlen(char *s)
{
int len = 0;

if (s == NULL)
return (0);

while (s[len])
len++;

return (len);
}

/**
* _strcpy - Copies a string
* @dest: Destination string
* @src: Source string
*
* Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

/**
* new_dog - Creates a new dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner's name
*
* Description: Allocates memory for a new dog and copies name and owner
*
* Return: Pointer to the new dog_t struct
*         NULL if malloc fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

if (name == NULL || owner == NULL)
return (NULL);

d = malloc(sizeof(dog_t));

if (d == NULL)
return (NULL);

d->name = malloc(_strlen(name) + 1);

if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = malloc(_strlen(owner) + 1);

if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

_strcpy(d->name, name);
d->age = age;
_strcpy(d->owner, owner);

return (d);
}
