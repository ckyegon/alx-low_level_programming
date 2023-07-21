#include <stdio.h>
/**
 * _putchar - function to check on c
 * @c - is haracter to be chcked
 * Return - 1 or  -1
 */
int _putchar(char c)
{
	return (write(1, &c));
}
