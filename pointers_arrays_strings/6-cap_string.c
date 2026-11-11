#include "main.h"

/**
 * is_sep - checks if a character is a word separator
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_sep(char c)
{
	char seps[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; seps[i] != '\0'; i++)
	{
		if (c == seps[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || is_sep(str[i - 1]))
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
