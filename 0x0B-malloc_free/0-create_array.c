#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * Return: null if size  is 0
 *@size: size of arrays
 *@c: char
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

s = malloc(sizeof(char) * size);

for (i = 0; i < size; i++)

s[i] = c;
return (s);

if (size == 0 || s == NULL)
	return (NULL);
}
