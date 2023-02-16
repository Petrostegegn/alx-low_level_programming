#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	putchar("size of a char: %i byte(s)\n", sizeof(char));
	putchar("size of an int: %i byte(s)\n", sizeof(int));
	putchar("size of a long int: %i byte(s)\n", sizeof(long int));
	putchar("size of a long long int: %i byte(s)\n", sizeof(long long int));
	putchar("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
