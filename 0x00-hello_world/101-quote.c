#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: always 1 (success)
 */
int main(void)
{
	const char *message =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, strlen(message));
	return (1);
}

