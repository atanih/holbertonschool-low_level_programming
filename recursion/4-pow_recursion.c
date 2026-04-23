#include "main.h"

/**
* _power_recursion - returns the value of x raised to the power of y
* @x: the base number
* @y: the power/exponent
*
* Return: the value of x^y, or -1 if y is lower than 0
*/
int _power_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _power_recursion(x, y - 1));
}
