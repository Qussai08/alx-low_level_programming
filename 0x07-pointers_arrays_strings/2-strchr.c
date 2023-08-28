#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string where to search for a character
 * @c: character to be located
 *
 * Return:  a pointer to the first occurrence of the char, or NULL if not found
 */

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
