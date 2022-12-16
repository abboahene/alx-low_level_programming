#include <stdio.h>

/**
* main - Fizzbuzz
*
*/
int main()
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if ((j % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((j % 5) == 0)
		{
			printf("Buzz");
		}
		else if (((j % 3) == 0) && ((j % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", j);
		}

		if (j != 100)
		{
			putchar(' ');
		}
	}
}
