#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: copied memory
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = n;
int j = 0;

for (; j < i; j++)
{
dest[j] = src[j];
n--;
}
return (dest);
}
