#include "main.h"

/***/

char *_strcat(char *dest, char *src)
{
	int st1, st2;

	st1 = 0;
	while (dest[st1] != '\0')
		st1++;
	for (st2 = 0; src[st2]; st2++)
		dest[st1++] = src[st2];
	return (dest);
}
