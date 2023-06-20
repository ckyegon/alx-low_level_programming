#include "main.h"
/**
* print_sign - Function prints the sign number
* @n: Checks for n
* Return: If n > 0, return 0 and print + else if n == 0 return 0 and print i0
* else if n is < 0 return -1 and print -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
