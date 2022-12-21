#include <stdio.h>

/**
* main - Affiche une chaîne hexadécimale
*
* Retour : toujours (succès)
*/
int principal (vide)
{
	caractère c ;

	pour (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	pour (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	retour (0);
}
