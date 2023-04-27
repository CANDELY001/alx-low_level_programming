#include "lists.h"
/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: parameter
 * @str: parameter
 * Return: new list
 */
/* BY CHARIFA MASBAHI*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ls;

	ls = malloc(sizeof(list_t));
	if (!ls)
		return (NULL);
	ls->str = strdup(str);
	ls->len = strlen(str);
	ls->next = *head;
	*head = ls;
	return (ls);
}
