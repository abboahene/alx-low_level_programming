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
	int i, j;


	for (i = 0; i < 98; i++)
	{
		for (j = i + 1; j < 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
