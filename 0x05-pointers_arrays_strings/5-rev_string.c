#include "main.h"

/**
 *  rev_string - function that reverses a string.
 *
 *  @s: string parameter
 */

void rev_string(char *s)
{
	int st, r;
	char len;

	for (st = 0; s[st] != '\0'; ++st)
		;

	for (r = 0; r < st / 2; r++)
	{
		len = s[r];
		s[r] = s[st - 1 - r];
		s[st - 1 - r] = len;
	}
}
