#include <stdio.h>
/**
 * main - program for printing size
 * Return: return 0;
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("\n");
	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of a int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
		return (0);
}
