#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 * @accept: second string
 * Return: pointer if it matches otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			++a;
		}
		++s;
	}
	return (NULL);
}
