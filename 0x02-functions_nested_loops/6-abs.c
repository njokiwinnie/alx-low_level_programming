#include "main.h"
/**
 * _abs - computes absolute value of an interger
 * @r: the interger to compute
 * Return: the absolute value of n
 */

int _abs(int r)
{
	if (r < 0)
	{
		int abs_val;

		abs_val = r * -1;

		return (abs_val);
	}
	return (r);

}
