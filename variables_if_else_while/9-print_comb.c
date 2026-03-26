#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all single-digit numbers separated by ", "
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

