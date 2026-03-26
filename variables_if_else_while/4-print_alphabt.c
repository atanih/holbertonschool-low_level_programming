#include <stdio.h>

/** print_alphabet - prints the alphabet in lowercase follow by a new line
 * 
 * Return: Always 0 (Success)
 * 
*/
int main (void)
{
    char c;

    c= 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return (0);
}

