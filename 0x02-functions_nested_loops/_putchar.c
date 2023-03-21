#include "main.h"
#include <unistd.h>
/**
* _putchar -for print out character
* @c:print char
* Return:return 0;
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
