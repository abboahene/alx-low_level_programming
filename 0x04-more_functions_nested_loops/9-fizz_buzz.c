#include <stdio.h>

/**
* main - Fizzbuzz
*
* Return: always 0
*/
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (((j % 3) == 0) && ((j % 5) != 0))
		{
			printf("Fizz ");
		}
		else
		if (((j % 5) == 0) && ((j % 3) != 0))
		{
			if (j == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		if (((j % 3) == 0) && ((j % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", j);
		}
	}

		printf("\n");

	return (0);
}
