#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: parameter
 * Return: result
 */
void free_listint2(listint_t **head)
{
	listint_t *ls;

	if (!head)
		return;
	while (*head)
	{
		ls = *head;
		*head = (*head)->next;
		free(ls);
	}
	*head = NULL;
}
