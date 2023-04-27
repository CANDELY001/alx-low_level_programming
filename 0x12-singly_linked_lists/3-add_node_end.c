#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: parameter
 * @str: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
