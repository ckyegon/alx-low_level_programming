#include <stdio.h>
/**
 * _putchar - is function to check for character c
 * @c: Is the character to be checked
 * Return: Return 1 if success and -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
