#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *			to the buffer pointed to by dest
 *
 * @dest: string
 * @src: string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int r = -1;

	do {
		r++;
		dest[r] = src[r];
	} while (scr[r] != '\0');

	return (dest);
}
