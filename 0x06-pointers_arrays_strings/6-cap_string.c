#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * using word seperator
 * @n: string
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	while (n[i] >= 97 && n[i] <= 122)
	{
		if (n[i] - 1 == ' ' ||
		    n[i] - 1 == ',' ||
		    n[i] - 1 == ';' ||
		    n[i] - 1 == '.' ||
		    n[i] - 1 == '!' ||
		    n[i] - 1 == '?' ||
		    n[i] - 1 == '(' ||
		    n[i] - 1 == '"' ||
		    n[i] - 1 == ')' ||
		    n[i] - 1 == '{' ||
		    n[i] - 1 == '}' ||
		    i == 0)
		{
		n[i] =  32;
		}
		i++;
	}
	return (n);
}
