#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integer
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i;
int j;

for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}