#include "main.h"

/**
* _sqrt_helper - helper function to find square root
* @n: the number to find square root of
* @x: the current guess for square root
*
* Return: the square root if found, or -1 if not a perfect square
*/
int _sqrt_helper(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (_sqrt_helper(n, x + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find square root of
*
* Return: the natural square root of n, or -1 if not a perfect square
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
