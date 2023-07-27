#include <unistd.h>
/**
 * _putchar - Writes character c to stdout
 * @c: The character to print
 * Return: On success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
