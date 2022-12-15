#include <stdio.h>

void write(void);
void print_alphabet(void);

/**
* write - Print a string
*/
void write()
{
	char *string = "_putchar\n";
	
	while (*string)
	{
		putchar(*string);
		string++;
	}
}

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
