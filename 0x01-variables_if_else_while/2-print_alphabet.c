#include <stdio.h>
/**
 * main - prints the letters of the alphabet in lower caps
 *
 * Return: 0
**/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

		putchar('\n');

	return (0);
}
