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

for (sum = 0; sum < size; sum++)
{
i = i + a[sum * size + sum];
}
for (sum = size - 1; sum >= 0; sum--)
{
j += a[sum * size + (size - sum - 1)];
}
printf("%d, %d\n", i, j);
}
