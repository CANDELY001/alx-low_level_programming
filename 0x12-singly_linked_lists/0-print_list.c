#include"lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 * Return: number of nodes
 */
/* BY CHARIFA MASBAHI*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}