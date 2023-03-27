#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string of characters
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);

	for (i = (len - 1); i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
