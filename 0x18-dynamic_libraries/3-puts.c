#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: the string
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
