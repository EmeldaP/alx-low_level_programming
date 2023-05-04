#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 *
 * Return: the head nodes data else 0
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int numb;

if (!head || !*head)
return (0);

numb = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (numb);
}
