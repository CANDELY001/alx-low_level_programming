#include "lists.h"
/*BY CHARIFA MASBAHI*/
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Head List
 * @n: parameter
 * Return: New Node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *v;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head != NULL)
	{
		v = *head;
		while (v->next != NULL)
			v = v->next;
		v->next = new;
		new->prev = v;
	}
	else
		*head = new;
	return (new);
}
