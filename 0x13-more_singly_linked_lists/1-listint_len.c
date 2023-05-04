#include "lists.h"
/**
 *  list_len - returns the number of elements in a linked listint_t list
 *  @h: pointer
 *
 *  Return: Number of node
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}
return (num);
}
