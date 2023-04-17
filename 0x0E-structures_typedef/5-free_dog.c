#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free gog memmory
 * @d: dog
 */
void free_dog(dog_t *d)
{
if (d)
{
	/*freeing memmory of d by dereferencing struct*/
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
}
