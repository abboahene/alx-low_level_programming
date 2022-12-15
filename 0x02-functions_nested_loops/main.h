#include <stdio.h>

/**
* write - Print a string
*/
void write()
{
	char *string = "_putchar\n";
	while (*string){
		putchar(*string);
		string++;
	}
}
