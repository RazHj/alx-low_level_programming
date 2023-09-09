#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the alphabets in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
