#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: byte
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *pt;

pt = malloc(b);

if (pt == NULL)
exit(98);
return (pt);
}
