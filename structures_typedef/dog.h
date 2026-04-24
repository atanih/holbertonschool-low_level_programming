#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
*struct dog - A dog's essential information
*@name: The dog's name
*@age: The dog's age
*@owner: The owner's name
*Description: Stores basic information about a dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
