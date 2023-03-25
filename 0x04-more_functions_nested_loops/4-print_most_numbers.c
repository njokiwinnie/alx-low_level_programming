#include "main.h"
/**
 * print_most_numbers - print numbers to stdout
 * except for 2 and 4
 * Return: none
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
	}
	putchar(i);
	putchar('\n');
}
