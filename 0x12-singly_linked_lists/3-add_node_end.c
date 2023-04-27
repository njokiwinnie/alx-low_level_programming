#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds nodes at end of list
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t len = 0;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
