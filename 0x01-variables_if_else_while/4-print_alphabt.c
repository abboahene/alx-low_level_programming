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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
