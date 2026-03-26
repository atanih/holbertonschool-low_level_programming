#include <stdio.h>

/**
 * main - prints all single digit numbers without char variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}

