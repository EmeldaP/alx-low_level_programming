#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: number lower than 0
 * Return: 0 else - 1 is errot
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
	return (1);
return (n * factorial(n - 1));
}
