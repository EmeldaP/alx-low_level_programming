#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int no;

for (no = 48; no < 58; no++)
{
putchar (no);
if (no != 57)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
