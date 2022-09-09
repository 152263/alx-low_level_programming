#include <stdio.h>

/**
 * main - taking the step
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
