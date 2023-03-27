#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string to stdout
 * @str: charcter string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
