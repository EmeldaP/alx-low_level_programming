#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string into int
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
int i, x, n, leng, f, digit;
i = x = 0;
n = 0;
leng = 0;
f = 0;
digit = 0;

while (s[leng] != '\0')
	leng++;

while (i < leng && f == 0)
{
if (s[i] == '-')
	++x;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (x % 2)
digit =- digit;
n = n * 10 + digit;
f = 1;

if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
	return (n);
}

/**
 * main - multiply two integers
 *@argc: count number of arguments
 * @argv:array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
