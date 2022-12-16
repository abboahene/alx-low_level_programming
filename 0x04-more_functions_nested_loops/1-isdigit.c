#include "main.h"

/**
* _isdigit - Check if char is digit
* @c: character
*
* Return: 1 - for digit and 0 not digit
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
