#include <stdio.h>

/**
 * main - prints the alphabet in reverse lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);

}

