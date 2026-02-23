#include "main.h"

/**
* cap_string - Capitalizes each word in the string
* @str: string to modify
*
* Return: str
*/
char *cap_string(char *str)
{
int i = 0;
int cap_next = 1;
char sep[] = " \t\n,;.!?\"(){}";
int j;

while (str[i] != '\0')
{
if (cap_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
cap_next = 0;
}

j = 0;
while (sep[j] != '\0')
{
if (str[i] == sep[j])
{
cap_next = 1;
break;
}
j++;
}

i++;
}

return (str);
}
