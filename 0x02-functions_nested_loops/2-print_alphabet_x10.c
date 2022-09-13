#include "main.h"

/**
 * print_alphabet_x10 - printing a-z 10 times
 * Description: printing lowercase alphabet 10 places
 * Return: void
 */
void print_alphabet_x10(void)
{
	char j;
	char g;

	for (j = 0; j < 10; j++)
	{
		for (g = 'a'; g <= 'z'; g++)
		{
			_putchar(g);
		}
		_putchar('\n');
	}
}
