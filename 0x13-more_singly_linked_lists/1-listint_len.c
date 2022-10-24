#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked list
 * @h: head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
