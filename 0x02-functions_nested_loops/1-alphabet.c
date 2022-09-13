#include "main.h"

/**
 * main - entry
 *
 * Description: printing lowercase alphabet
 *
 * Return: 0
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
