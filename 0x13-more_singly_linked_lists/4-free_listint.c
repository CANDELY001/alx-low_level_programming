#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: parameter
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ls;

	while (head)
	{
		ls = head;
		head = head->next;
		free(ls);
	}
}
