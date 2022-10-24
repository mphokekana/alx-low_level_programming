#include "lists.h"

/**
 * free_listp - prints a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listpt *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->a = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->a)
			{
				printf("-> [%a] %d\n", (void *)head, head->b);
				free_listp(&ptr);
				return (nodes);
			}
		}
		printf("[%a] %d\n", (void *)head, head->b);
		head = head->next;
		nodes++;
	}
	free_listp(&ptr);
	return (nodes);
}
