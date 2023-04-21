#include <stdio.h>
#include <stdlib.h>
/**
 * main - copy opcodes
 * @argc: count number of argument
 * @argv: array of argument
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
char *arrs;
int i, bytes;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arrs = (char *)main;

for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arrs[i]);
break;
}
printf("%02hhx", arrs[i]);
}
return (0);
}
