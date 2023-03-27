#include "main.h"
/**
 * puts2 - prints every other character in a striing
 * @str: string of character
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i += 2;
	}
	putchar('\n');
}
