#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * description - program that prints all possible combinations
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 98 ; i++)
	{
	for (j = i + 1 ; j <= 99 ; j++)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(' ');
	putchar((j / 10) + '0');
	putchar((j % 10) + '0');
	if (i == 98 && j == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
