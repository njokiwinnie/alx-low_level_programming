#include "main.h"
/**
 * swap_int - swaps value of two intergers
 * @a: first number
 * @b: second number
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
