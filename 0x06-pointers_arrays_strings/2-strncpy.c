#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * Return: the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cp;

	for (cp = 0; cp < n && src[cp] != 0; cp++)
		dest[cp] = src[cp];
	while (cp < n)
	{
		dest[cp] = '\0';
		cp++;
	}
	return (dest);
}
