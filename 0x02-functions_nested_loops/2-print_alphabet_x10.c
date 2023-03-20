#include "main.h"
/**
 * print_alphabet_x10 - print alphabets time 10
 * then follwed by new line
 */
void print_alphabet(void)
{
int i;
char c;
i = 0;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{_putchar (c);
c++;
}
_putchar ('\n');
i++;
}
}

