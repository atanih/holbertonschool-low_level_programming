#include <unistd.h>
#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
* Return: void
*/
void times_table(void)
{
int i;
int j;
int result;

i = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
result = i *j;
if (j != 0)
{
write(1, ", ", 2);
if (result < 10)
write(1, " ", 1);
}
if (result < 10)
_putchar('0' + result);
else
{
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
j++;
}
_putchar('\n');
i++;
}
}
