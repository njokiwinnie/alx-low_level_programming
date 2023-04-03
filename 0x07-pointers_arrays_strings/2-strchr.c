#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: pointer of the string
 * @c: string
 * Return: pointer of the string if c is present otherwise Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s  == c)
		return (s);
	return (NULL);
}
