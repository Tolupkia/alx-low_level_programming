#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 *
 * @haystack: string to work on
 * @needle: substring to match
 * Return: pointer to the first match or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack*/
	{
		/* if a byte matches first char of needle */
		/* iterate through needle until match end */
		if (haystack[i] == needle[0])
		{
			x = i. j = 0;
			while (needle[j] != '\0.)
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			} /* if matched throughout, return haystack */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL); /* no match */
}
