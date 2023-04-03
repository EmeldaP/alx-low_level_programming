#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals of a square
 * @a: integer
 * @size: integer
 * Return: return 0;
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int sum;

i = 0;
j = 0;

for (i = 0; i < size; i++)
{
sum = sum + a[i * size + i];
}
for (i = size - 1; i >= 0; j--)
{
j = 1 + a[i * size + (size - j - 1)];
}
printf("%d, %d\n", sum, j);
}

