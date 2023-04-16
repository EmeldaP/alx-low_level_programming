#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - eallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr_;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
	return (ptr);

if (new_size == 0 && ptr)
{
free (ptr);
return (NULL);
}

if (!ptr)
	return (malloc (new_size));
ptr_ = malloc(new_size);

if (!ptr_)
	return (NULL);

old_ptr = ptr;

if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
	ptr_[i] = old_ptr[i];
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
	ptr_[i] = old_ptr[i];
}
free(ptr);
return(ptr_);
}