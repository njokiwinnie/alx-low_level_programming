#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of linked elements
 * @h: pointers to the first node
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
