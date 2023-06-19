#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 Always (Success)
*/
int main(void)
{
	printf("Size of a char: %d bytes\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of a float: %ld bytes\n", sizeof(float));
	return (0);
}
