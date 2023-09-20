#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @str: the string whose length to check
 *
 * Return: integer length of string
 */

int _strlen(char *str)
{
	int len = 0;

	if (!str)
		return (0);

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcmp - performs lexicogarphic comparison of two strings.
 * @str1: the first string
 * @str2: the second string
 *
 * Return: negative if str1 < str2,
 *          positive if str1 > str2,
 *          zero if str1 == str2
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle:  substring to find
 *
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strings
 * @destination: the destination buffer
 * @source: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *destination, char *source)
{
	char *r_val = destination;

	while (*destination)
		destination++;
	while (*source)
		*destination++ = *source++;
	*destination = *source;
	return (r_val);
}
