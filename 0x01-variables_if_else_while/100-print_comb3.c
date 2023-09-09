#include <stdio.h>
/**
* main - entry point of the programm.
* Description: This prints alphabet without 'q', 'e'.
* Return: always return zero.
**/
int main(void)
{
	int i, j, x = 0, y = 1;

	for (i = x; i <= 9; i++)
	{
		for (j = y; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i + j == 17)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
		x++;
		y++;
	}
	return (0);
}
