#include "main.h"
/**
* print_alphabet_x10 - print alphabets x10
*
* Return: void
*/
void print_alphabet_x10(void)
{
	char c;
	int r;

	r = 0;
	while (r < 9)
	{
	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	r++;
	}
}
