#include "main.h"
/**
 * _strlen_recursion - returrnlength of string
 * @s: string
 * Return: s
 */
int _strlen_recursion(char *s)
{
int length = 0;

if (*s)
{
length++;
length = 1 + _strlen_recursion(s + 1);
}
return (length);
}
