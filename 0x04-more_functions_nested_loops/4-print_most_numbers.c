#include "main.h"
/**
 * print_most_numbers - print numbers to stdout
 * except for 2 and 4
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	i = 48;

	for (; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
	}
	putchar(i);
	putchar('\n');
}
