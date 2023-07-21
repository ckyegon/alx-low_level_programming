#include <stdio.h>
/**
 * _putchar - function to check for c
 * @c - character to be checked
 * Return - 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c ));
}
