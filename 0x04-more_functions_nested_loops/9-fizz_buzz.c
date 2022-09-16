#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz
 * Fizz is printed for multiples of three,
 * Buzz for miltiples of five,
 * FizzBuzz for multiples of both three and five
 *
 * Return: Always 0.
 */
int main(void)
{
	int q;

	for (q = 1; q <= 100; q++)
	{
		if ((q % 15) == 0)
			printf("FizzBuzz");

		else if ((q % 3) == 0)
			printf("Fizz");

		else if ((q % 5) == 0)
			printf("Buzz");

		else
			printf("%d", q);
		if (q > 100)
			break;
		printf(" ");

	}

	printf("\n");

	return (0);
}
