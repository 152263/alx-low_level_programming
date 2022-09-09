#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 102;
	while (i < 112)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
