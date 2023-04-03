#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: pointer otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *s, *p, *p_s;

	for (s = haystack; *s != '\0'; ++s)
	{
		p = s;
		p_s = needle;

		while (*p == *p_s && *p_s != '\0')
		{
			++p;
			++p_s;
		}
		if (*p_s == '\0')
		{
			return (s);
		}
	}
	return (NULL);
}
