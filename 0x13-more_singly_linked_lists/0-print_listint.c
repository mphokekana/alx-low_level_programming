#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count += 1;
		head = head->next;
	}
	return (count);
}
