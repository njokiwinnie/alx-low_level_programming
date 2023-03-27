#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of a string
 * @s: character string
 * Return: the value a
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{	a++;
		s++;
	}
	return (a);
}
