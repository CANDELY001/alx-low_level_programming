#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: parameter
 * Return: results
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ls = NULL;
	listint_t *ls2 = NULL;

	if (!head)
		return (NULL);
	while (!(*head))
	{
		ls2 = (*head)->next;
		(*head)->next = ls;
		ls = *head;
		*head = ls;
	}
	*head = ls;
	return (*head);
}
