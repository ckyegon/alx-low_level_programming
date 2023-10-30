#include <unistd.h>
/**
* _putchar - function to check character c
* @c: character to check
* Return: 0 if true and 1 for error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
