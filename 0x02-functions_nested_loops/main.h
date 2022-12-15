#include <stdio.h>

/**
* _putchar - Print a string
*
* Return: always 0
*/
void _putchar()
{
	char *string = "_putchar\n";
	while (*string){
		putchar(*string);
		string++;
	}
}
