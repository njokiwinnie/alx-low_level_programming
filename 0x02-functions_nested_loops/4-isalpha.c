#include "main.h"
/**
 * main - check if letter is lower or upper case
 * returns 1 if either
 * otherwise return 0 (SUCCESS)
**/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
