#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * This function uses nested loops to print the lowercase alphabet from 'a'
 * to 'z' ten times using the `_putchar()` function defined in the header file.
 * "main.h".
 */
void print_alphabet_x10(void)
{
	char letter;
	int num;

	for (num = 0; num <= 9; ++num)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
