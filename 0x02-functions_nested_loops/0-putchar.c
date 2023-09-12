#include "main.h"
/**
* main - entry point of programm
* Description: this programm prints '_putchar'
* Return: always return 0
**/
int main(void)
{
	char myput[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(myput[x]);
	_putchar('\n');
	return (0);
}

