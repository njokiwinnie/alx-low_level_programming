#include <stdio.h>
/**
 * main - print number 1 to 100 
 * mutiples of 3 print Fizz
 * multiples of 5 print Buzz
 * multiples of 3 and 5 print Fizzbuzz
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i > 0; i <= 100; i++)
	{
		if (i % 3)
			printf('Buzz');
		else
			(i % 5);
				printf('Fizz');
		else 
			((i % 3) && (i % 5));
				printf('FizzBuzz');
	}
	printf('i');
	printf('\n');
}
