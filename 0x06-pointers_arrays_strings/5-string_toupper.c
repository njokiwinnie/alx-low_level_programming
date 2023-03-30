#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: string
 * Return: uppercase
 */
char *string_toupper(char *n)
{
	char *i = n;

	while (*n)
	{
		if (*n >= 'a' && *n <= 'z')
			*n -= 32;
		n++;
	}
	return (i);
}
