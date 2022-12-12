#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point of this program
*
* Return: alway 0
*/
int main(void)
{
	int i;


	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');

	return (0);
}
