#include "main.h"

/**
* _isupper - Check if char is uppercase or not
* @c: character
*
* Return: 1 - for uppercase and 0 not uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
