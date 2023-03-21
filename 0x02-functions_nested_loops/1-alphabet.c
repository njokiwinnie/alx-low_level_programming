#include "main.h"
#include "_putchar.c"
#include <stdio.h>
/**
 * main - check code
 * print alpphabet iin lower case
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
