#include "c_programming.h"

/**
 * * reverse - Function that reverses a string
 * @text: string to be reversed
 * Return: text
 */
char * reverse(char * text)
{
	int len, c;
	char *start, *end, tmp;

	len = _strlen(text);
	start = text;
	end = text;
	for (c = 0; c < len/2; c++)
		end++;
	for (c = 0; c < len/2; c++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
	return (text);
}
/**
 * _strlen - Funnction to find the length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

int main ()
{
	char text[100];

	printf("Enter the string\n");
	scanf("%s", text);
	reverse(text);
	printf("The string reversed is \"%s\".\n", text);
	return (0);
}
