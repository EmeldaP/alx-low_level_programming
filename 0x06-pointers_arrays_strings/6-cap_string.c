#include "main.h"
/**
 * cap_string -  capitalize all words of a string
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
char *ptr = str;
int word = 1;

while (str)
{
if (iswords(*str))
	word = 1;
else if (isLower(*str))
&&word)
{
*str -= 32;
word = 0;
}
else
word = 0;
str++;
}
return (ptr);
}
