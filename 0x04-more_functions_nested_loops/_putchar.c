#include <unistd.h>

/*
* _putchar - print char c to std output
* @c: character
*
* Return: -1 for err and 1 for success 
*/
int _putchar(char c)
{
	return write(1, &c, 1);
}
