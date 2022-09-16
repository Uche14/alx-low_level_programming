#include <stdio.h>
#include "main.h"

/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return: returns nothing
*/

int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (h % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz ");
				printf("\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else 
 


