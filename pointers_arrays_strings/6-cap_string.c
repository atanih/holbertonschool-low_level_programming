#include "main.h"

/**
* cap_string - Capitalizes all words of a string
* @str: The string to modify
*
* Return: Pointer to the modified string
*/
char *cap_string(char *str)
{
int i;
int cap;

cap = 1;
i = 0;
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
cap = 1;
}
else
{
if (cap == 1 && str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
cap = 0;
}
i++;
}
return (str);
}
