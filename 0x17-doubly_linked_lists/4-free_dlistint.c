#include "lists.h"
/*BY CHARIFA MASBAHI */
/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head List
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *v;

	while (head != NULL)
	{
		v = head;
		head = head->next;
		free(v);
	}
}
