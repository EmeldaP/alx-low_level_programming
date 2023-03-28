#include "main.h"
/**
 * print_array - prints elements of array
 * @n: is the numbe of elements of the array
 * Return: inputs
 * @a: the name of the array
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < (n - 1); i++)
{

printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
