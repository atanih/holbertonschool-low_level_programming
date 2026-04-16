#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
