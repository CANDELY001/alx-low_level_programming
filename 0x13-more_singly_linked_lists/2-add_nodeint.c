#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: parameter
 * @n: parameter
 * Return: result
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ls;

	ls = malloc(sizeof(listint_t));
	if (!ls)
		return (NULL);
	ls->n = n;
	ls->next = *head;
	*head = ls;
	return (ls);
}
