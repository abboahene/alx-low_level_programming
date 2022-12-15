#include <stdio.h>

/**
* print_alphabet - Print a lower alphabets
*/
void print_alphabet()
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
}
