#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * Return: length
 * @s: string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
