#include "main.h"
/**
 * puts_half - function that prints half of a string
 * followed by new string
 * @str: string
 * Return: string
 */
void puts_half(char *str)
{
int i;
int n;
int length;

length = 0;

for (i = 0; str[i] != '\0'; i++)
length++;
{
n = (length / 2);

	if ((length % 2) == 1)
{
	n = ((length + 1) / 2);
}
for (i = n; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
