#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer
 * @index:  index of the node starting at 0
 * Return: node else 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int i = 0;

while (index > i && temp)
{
temp  = temp->next;
i++;
}
return (temp ? temp : NULL);
}
