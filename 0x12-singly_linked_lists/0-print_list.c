#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints elements of the the list
 * @h: pointer to start the list
 * Return: number of nodes or 0 if NULL
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}
