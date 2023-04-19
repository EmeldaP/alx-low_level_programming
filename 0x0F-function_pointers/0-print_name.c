#include "function_pointers.h"
#include <stdio.h>
/**
 * print-name - print a name
 * @name: string
 * @f: function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
