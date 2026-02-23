#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: string to encode
 *
 * Return: str
 */
char *leet(char *str)
{
int i = 0;
int j;
char letters[] = "aAeEoOtTlL";
char codes[] = "4433007711";

while (str[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (str[i] == letters[j])
str[i] = codes[j];
j++;
}
i++;
}

return (str);
}
