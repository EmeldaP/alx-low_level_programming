#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: byte
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(b);
return (ptr);
}
