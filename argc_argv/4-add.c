#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int i, j, sum = 0;
char *str;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
str = argv[i];

for (j = 0; str[j] != '\0'; j++)
{
if (!isdigit(str[j]))
{
printf("Error\n");
return (1);
}
}

sum += atoi(str);
}

printf("%d\n", sum);

return (0);
}
