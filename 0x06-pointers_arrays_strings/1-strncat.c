#include "main.h"

/**
 * _strncat - function that concatenates two strings using n
 *
 * @dest: destinartion string
 * @src: source string
 * @n: characters to be used
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int st1, st2;

	st1 = 0;
	while (dest[st1] != '\0')
		st1++;
	for (st2 = 0; st2 < n && src[st2] != '\0'; st2++)
		dest[st1++ + st2] = src[st2];
	dest[st1++ + st2] = '\0';
	return (dest);
}
