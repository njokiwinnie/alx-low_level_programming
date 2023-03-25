#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers - prints number from 0 to 9 to stdout
 * Return: none
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		_putchar(i);
	_putchar('\n');
}
