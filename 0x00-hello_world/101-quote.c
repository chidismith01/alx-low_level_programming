#include <unistd.h>
/**
 * main - Entry Point
 *
 * A C program that prints exactly:
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * followed by a new line, to the standard error.
 *
 * Return : always 1 (error)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10
\-19\n";
	write(2, quote, sizeof(quote) - 1);
	return (1);
}