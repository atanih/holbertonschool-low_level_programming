#include "main.h"
#include <string.h>

/**
* _strlen - Returns the length of a string
* @s: String to measure
*
* Return: Length of string
*/
unsigned int _strlen(char *s)
{
unsigned int len = 0;

if (s == NULL)
return (0);

while (s[len])
len++;

return (len);
}

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

len_s1 = _strlen(s1);
len_s2 = _strlen(s2);

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
