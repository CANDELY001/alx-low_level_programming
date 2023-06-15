#include "lists.h"
/*BY CHARIFA MASBAHI*/
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Head List
 * @index: Index Node
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *v;

	if (head == NULL)
		return (NULL);
	v = head;
	for (i = 0; i < index; i++)
	{
		if (v == NULL)
			return (NULL);
		v = v->next;
	}
	return (v);
}
