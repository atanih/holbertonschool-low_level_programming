#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: starting number
*
* Return: void
*/
void print_to_98(int n)
{
int num;

if (n <= 98)
{
num = n;
while (num < 98)
{
printf("%d, ", num);
num++;
}
}
else
{
num = n;
while (num > 98)
{
printf("%d, ", num);
num--;
}
}
printf("98\n");
}
