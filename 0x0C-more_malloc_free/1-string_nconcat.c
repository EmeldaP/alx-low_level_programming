#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: byte integer
 * Return: string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, x;
if (s1 == NULL)
	i = 0;
else
{
for (i = 0; s1[i]; i++)
	;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j]; j++)
	;
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
	return (NULL);
for (x = 0; x < i; x++)
s[x] = s1[x];
for (x = 0; x < j; x++)
s[x + i] = s2[x];
s[i + j] = '\0';
return (s);
}
