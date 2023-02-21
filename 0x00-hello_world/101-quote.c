#include <stdio.h>
#include <unistd.h>
/**
  * main - A C program that prints a line to the standard error
  * Return: 1 (Success)
 */
int main(void)
{
	char s[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

	fpritf(stderr, "%s", s);
	return (1);
}
