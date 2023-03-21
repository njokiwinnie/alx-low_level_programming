#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'.
 * This function uses a loop to print the lowercase alphabet from 'a' to 'z'
 * using the `_putchar()` function defined in the header file "unistd.h".
 * Return: void.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
