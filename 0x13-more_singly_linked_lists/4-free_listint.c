#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - A function that frees a linked list
 * @head: A pointer to listint_t structure
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *cur_node;

	while (head != NULL)
	{
		cur_node = head;
		head = head->next;
		free(cur_node);
	}
	free(head);
}
