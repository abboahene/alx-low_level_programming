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
	int i, j, k;


	for (i = 0; i < 8; i++)
	{
		for (j = i + 2; j < 9; j++)
		{
			for (k = i + 3; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
