#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memor
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: Null if str is Null
 */
char *_strdup(char *str)
{
char *c;
int i = 0;
int j = 0;

if (str == NULL)
	return (NULL);
while (str[i] != '\0')
	i++;
c = malloc(sizeof(char) * (i++));
if (c == NULL)
	return (NULL);

for (j = 0; str[j]; j++)
	c[j] = str[j];
return (c);
}
