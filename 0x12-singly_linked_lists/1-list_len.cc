#include "lists.h"
#include <stdlib.h>
/**
 * list_len - number of elements in a linked list_t list
 * @h - pointer
 * Return: h
 */
size_t list_len(const list_t *h)
{
size_t x = 0;

if (h->next)
{
x++;
h = h->next;
}
return (h);
}
