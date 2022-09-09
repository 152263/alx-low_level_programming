#include <stdio.h>

/**
 * main - the unbeatable combination
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}
