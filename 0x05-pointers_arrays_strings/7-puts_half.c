#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string for manipulation
 *
 * Return: None
 */
void puts_half(char *str)
{
	int i, len, mid;

	len = strlen(str);

	if (len % 2 == 0)
		mid = (len / 2);
	else
		mid = (len + 1) / 2;

	for (i = mid; (str[i] != '\0') ; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
