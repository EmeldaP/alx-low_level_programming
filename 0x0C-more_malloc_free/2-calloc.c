#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fill memory
 * @s: memory area
 * @b: char
 * @n: number of copies
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: element of size byte
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);
ptr = malloc(size * nmemb);

if (ptr == NULL)
	return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
