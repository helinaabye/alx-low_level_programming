#include"main.h"
/**
 * _strcmp - is a function that compares two strings
 * @s1 : pointer to first input
 * @s2 : pointer to second input
 * Return: 0 if s1=s2, positive int if s1>s2 and negative if s1<s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
