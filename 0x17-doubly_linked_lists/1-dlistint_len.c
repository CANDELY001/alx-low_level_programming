#include "lists.h"
/* BY CHARIFA MASBAHI*/
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: Head List
 * Return: result
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
