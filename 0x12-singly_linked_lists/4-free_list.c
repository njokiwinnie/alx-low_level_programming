#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next;

	while (temp != NULL)
	{
		next = head->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
