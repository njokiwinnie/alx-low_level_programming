#include "main.h"
/**
 * _strspn - lenght of a prefix substring
 * @s: initial segement of the string
 * @accept: other segment
 * Return: prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *ps = s;

	while (*ps != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*ps == *a)
			{
				++count;
				break;
			}
			++a;
		}
		if (*a == '\0')
		{
			return (count);
		}
		++ps;
	}
	return (count);
}
