#include "main.h"
/**
 * _puts_recursion - print string
 * followed by new line
 * @s: string
 * Return: return 0;
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
