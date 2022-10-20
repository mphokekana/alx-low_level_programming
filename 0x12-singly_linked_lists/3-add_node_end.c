#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node, *current_node;
	size_t a;

	new_end_node = malloc(sizeof(list_t));
	if (new_end_node == NULL)
		return (NULL);

	new_end_node->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	new_end_node->len = a;
	new_end_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_end_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_end_node;
	}
	return (*head);
}
