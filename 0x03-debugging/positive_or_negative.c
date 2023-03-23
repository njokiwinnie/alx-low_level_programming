#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
 * positive_or_negative - prints if random number is positive, zero or negative
 * @i: initialized
**/
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
