#include "main.h"

/**
 * print_alphabet_x10 - printing a-z 10 times
 * Description: printing lowercase alphabet 10 places
 * Return: void
 */
void print_alphabet_x10(void)
{
	char j = 0;
	char g;
		while (j < 10)
		{
			g = 'a';
			while (g <= 'z')
			{
				_putchar(g);
				g++;
			}
			_putchar(j);
			_putchar('\n');
			j++;
		}
		_putchar('\n');
}
