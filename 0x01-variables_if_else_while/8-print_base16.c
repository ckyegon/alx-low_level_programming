#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 Always (Success)
*/
int main(void)
{
	int i;
	char low;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
