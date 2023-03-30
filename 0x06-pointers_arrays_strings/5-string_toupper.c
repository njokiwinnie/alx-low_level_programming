#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: string
 * Return: uppercase
 */
char *string_toupper(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
