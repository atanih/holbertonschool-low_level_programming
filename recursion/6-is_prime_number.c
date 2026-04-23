#include "main.h"

/**
* _is_prime_helper - helper function to check if number is prime
* @n: the number to check
* @d: the divisor to test
*
* Return: 1 if prime, 0 if not prime
*/
int _is_prime_helper(int n, int d)
{
if (d * d > n)
return (1);
if (n % d == 0)
return (0);
return (_is_prime_helper(n, d + 1));
}

/**
* is_prime_number - returns 1 if the input integer is a prime number
* @n: the number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (_is_prime_helper(n, 2));
}
