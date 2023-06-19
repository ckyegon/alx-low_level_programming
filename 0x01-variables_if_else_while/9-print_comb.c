#include <stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int j;

	j = '0';
	while (j <= '9')
	{
		putchar(j);
		j++;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
