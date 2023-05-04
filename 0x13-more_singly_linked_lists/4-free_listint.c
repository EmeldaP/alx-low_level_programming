#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t lis
 * @head: pointer
 * Return: 0
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
