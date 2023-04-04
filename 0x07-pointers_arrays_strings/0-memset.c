#include "main.h"
/**
 * _memset -  fills the firs memory area pointedby s and b byte
 * @s: address memory
 * @b: costant value
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (; n <= 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
