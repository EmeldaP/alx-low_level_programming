#include "main.h"
#include <unistd.h>
/**
 * _putchar -write the character c to stdout
 * @c: The chacarterto print
 * Return: 1 if successful
 * On error, -1 if unsuccessful
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
