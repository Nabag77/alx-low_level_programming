#include "main.h"

/**
 * cap_string - funtion that capitalizes all words of a string
 *
 * @st: string
 *
 * Return: the changed string
 */

har *cap_string(char *st)
{
	int index = 0;

	while (st[index])
	{
		while (!(st[index] >= 'a' && st[index] <= 'z'))
			index++;

		if (st[index - 1] == ' ' ||
		    st[index - 1] == '\t' ||
		    st[index - 1] == '\n' ||
		    st[index - 1] == ',' ||
		    st[index - 1] == ';' ||
		    st[index - 1] == '.' ||
		    st[index - 1] == '!' ||
		    st[index - 1] == '?' ||
		    st[index - 1] == '"' ||
		    st[index - 1] == '(' ||
		    st[index - 1] == ')' ||
		    st[index - 1] == '{' ||
		    st[index - 1] == '}' ||
		    index == 0)
			st[index] -= 32;

		index++;
	}

	return (st);

}
