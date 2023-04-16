#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string in digit
 * @s: string
 * Return: 0 Always
 */
int check_num(char *s)
{
unsigned int c;
c = 0;

while (c < strlen(s))
{
if (!isdigit(s[c]))
{
return (0);
}
c++;
}
return (1);
}

/**
 * main - add positive it
 * @argc: count number of arguments
 * @argv: array of arguments
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
int count;
int s;
int sum = 0;

count = 1;

while (count < argc)
{
if (check_num(argv[count]))
{
s = atoi(argv[count]);
sum += s;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}
