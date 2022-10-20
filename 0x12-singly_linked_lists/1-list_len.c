#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: single linked list
 * Return:  returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t numb_nodes;

	numb_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		numb_nodes++;
	}
	return (numb_nodes);
}
