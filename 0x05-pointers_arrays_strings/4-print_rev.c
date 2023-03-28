#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * followed by a new line
 * @str: string
 * Return: string
 */
void print_rev(char *str)
{
int length = 0;
int rev;

while (*str != '\0')
{
length++;
str++;
}
str--;
for (rev = length; rev > 0; rev--)
{
_putchar(*str);
str--;
}
_putchar('\n');
}
