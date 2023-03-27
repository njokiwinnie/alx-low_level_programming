#include "main.h"
#include <string.h>
/**
 * rev_string - reverse sring
 * @s: string of character
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		char temp = *(s + 1);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}
