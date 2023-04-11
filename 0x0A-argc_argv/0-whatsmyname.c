#include <stdio.h>
/**
 * main -prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - succes.
 */
int main(int argc_attribute_((unused)), char *argv[])
{
	print("%s\n", argv[0]);
	return (0);
}
