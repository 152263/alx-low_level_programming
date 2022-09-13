#include "main.h"

/**
 * print_alphabet - Entry
 *
 * Description: printing lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char r = 'a';

		while (r <= 'z')
		{
			_putchar(r);
			r++;
		}
	_putchar('\n');
}
