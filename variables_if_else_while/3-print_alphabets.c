#include <unistd.h>

/**
* main - Prints the alphabet in lowercase then uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
_putchar(c);
for (c = 'A'; c <= 'Z'; c++)
_putchar(c);
_putchar('\n');
return (0);
}
