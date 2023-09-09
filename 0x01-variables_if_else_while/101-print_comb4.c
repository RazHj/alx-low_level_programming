#include <stdio.h>
/**
* main - entry point of the programm.
* Description: This prints alphabet without 'q', 'e'.
* Return: always return zero.
**/
int main(void)
{
	int i = 0, j, k, l = 7, m = 1, n = 2;

	while (i <= l)
	{
		for (j = m; j <= 8; j++)
			for (k = n; k <= 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				putchar(',');
				putchar(' ');
			}
			n++;
			m++;
		l--;
	}
	return (0);
}
