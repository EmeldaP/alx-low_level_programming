#include <stdio.h>
/**
 * main - print alphabets
 * Return:return 0;
 */
int main(void)
	{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

for (i = 0; i < 26; i++)
{
	putchar (alphabet[i]);
}
	putchar ('\n');
	return (0);
	}
