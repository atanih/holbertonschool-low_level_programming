#include "main.h"
/*
 * swap_int - swapl the value of two integrals
 * @a: pointers to first integer
 * @b: pointer to second integer
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
