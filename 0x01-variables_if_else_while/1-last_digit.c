#include <stdlib.h>
#include <time.h>
/** main -  print last number of a random number 
 * 
 * Return: 0
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	return (0);
}
