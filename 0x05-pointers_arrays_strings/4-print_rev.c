#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string of characters
 */
void print_rev(char *s)
{
	while (*s == '\0')
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
