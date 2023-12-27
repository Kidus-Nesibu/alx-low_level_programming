#include "main.h"
#include <stdlib.h>
/**
 * counter - counts the number of words
 * @str: the string that is passed
 *
 * Return: the counts of the word
 */
int counter(char *str)
{
	int len = 0, i = 0, count = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;
	while (i < len - 1)
	{
		if (str[i] == ' ')
			i++;
		else if (str[i] != ' ' || str[i] != '\0')
		{
			while (str[i] != ' ' || str[i] != '\0')
			{
				if (str[i] == ' ' || str[i] == '\0')
				{
					count++;
					break;
				}
				else
					i++;
			}
		}
	}
	return (count);
}
/**
 * count_i - function to track i
 * @str: the string that is passed
 * @i: the i's index that is passed
 *
 * Return: i as an integer value
 */
int count_i(char *str, int i)
{
	while (str[i] != ' ' || str[i] != '\0')
	{
		i++;
		if (str[i] == ' ' || str[i] == '\0')
			break;
	}
	return (i);
}
/**
 * word_count - count the number of word after splitting
 * @str: the string that is passed
 * @i: the index value passed
 *
 * Return: the word count
 */
int word_count(char *str, int i)
{
	int wordcount = 0;

	while (str[i] != ' ' || str[i] != '\0')
	{
		wordcount++;
		i++;
		if (str[i] == ' ' || str[i] == '\0')
			break;
	}
	return (wordcount);
}
/**
 * strtow - splits strings into words
 * @str: the string
 *
 * Return: pointer to dynamic memory
 */
char **strtow(char *str)
{
	int i = 0, count = 0, len = 0, wordcount, setter, j = 0, flag;
	char **ptr;

	if (str == NULL)
		return (NULL);
	for (len = 0; (str[len] != '\0'); len++)
	count = counter(str);
	if (count == 0)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < len - 1)
	{
		if (str[i] == ' ')
			i++;
		else if (str[i] != ' ' || str[i] != '\0')
		{
			wordcount = word_count(str, i);
			i = count_i(str, i);
			*(ptr + j) = (char *)malloc((wordcount + 1) * sizeof(char));
			if (*(ptr + j) == NULL)
				return (NULL);
			flag = i - wordcount;
			setter = 0;
			for (; (wordcount > 0); ++setter)
			{
				if (str[flag] == ' ' || str[flag] == '\0')
					break;
				(*(*(ptr + j) + setter)) = str[flag];
				flag++;
			}
			(*(*(ptr + j) + (setter))) = '\0';
			j++;
		}
		*(ptr + j) = NULL;
	}
	return (ptr);
}
