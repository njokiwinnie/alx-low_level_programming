#include "main.h"
/**
 * more_numbers - prints number 0 tp 14 ten times
 */
void more_numbers(void)
{
	int i;
	int a;

	for (a = 0; a <= 9; ++a)
	{
		for (i = 0; i <= 14; i++)
			putchar(i);
		putchar('\n');
	}
}
