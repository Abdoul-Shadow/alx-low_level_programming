#include <stdio.h>

/**
 * main - Prints the alphabetic
 * Retour : toujours (succès)
 */
int main(void)

{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
