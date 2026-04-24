#include "main.h"
#include <string.h>

/**
* string_nconcat - Concatenates two strings with n bytes limit from s2
* @s1: First string (or NULL)
* @s2: Second string (or NULL)
* @n: Number of bytes of s2 to concatenate
*
* Return: Pointer to newly allocated space with s1 + first n bytes of s2
*         NULL if memory allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len_s1, len_s2, i, j;
char *result;

len_s1 = 0;
len_s2 = 0;

if (s1 != NULL)
{
while (s1[len_s1])
len_s1++;
}

if (s2 != NULL)
{
while (s2[len_s2])
len_s2++;
}

if (n >= len_s2)
n = len_s2;

result = malloc((len_s1 + n + 1) * sizeof(char));

if (result == NULL)
return (NULL);

i = 0;
while (i < len_s1)
{
result[i] = s1[i];
i++;
}

j = 0;
while (j < n)
{
result[i] = s2[j];
i++;
j++;
}

result[i] = '\0';

return (result);
}
