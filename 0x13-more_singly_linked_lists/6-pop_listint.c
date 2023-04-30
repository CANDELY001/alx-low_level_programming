#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: parameter
 * Return: result
 */
int pop_listint(listint_t **head)
{
	listint_t *ls;
	int i;

	if (!(*head))
		return (0);
	ls = *head;
	i = ls->n;
	(*head) = (*head)->next;
	free(ls);
	return (i);
}
