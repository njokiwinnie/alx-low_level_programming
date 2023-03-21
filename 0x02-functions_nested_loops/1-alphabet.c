#include "main.h"
/**
 * print_alphabet: prints alphabet in lower case
 *  letter 'a' to 'z': prints letter
 * `_putchar()` function defined in the header file "unistd.h".
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		_putchar(letter);
	_putchar('\n');
}
