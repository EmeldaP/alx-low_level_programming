#include "main.h"
#include <stdio.h>
/**
 * main - print a name
 * @argv: array of  arguments
 * @argc: number of arguments
 * Return: 0 Always
 */
int main(int argc _attribut_((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}