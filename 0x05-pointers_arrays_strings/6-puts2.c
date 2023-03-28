#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character follew by new line
 * @str: string
 * Return: string
 */
void puts2(char *str)
{
int length = 0;
int i = 0;
char *j = str;
int p;

while (*j != '\0')
{
j++;
length++;
}
i = length - 1;

for (p = 0; p <= i; p++)
{
if (p % 2 == 0)
{
_putchar(str[p]);
}
}
_putchar('\n');
}

