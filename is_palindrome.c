#include "c_programming.h"

/**
 * is_palindrome - Function that checks if a given string is palindrome
 * @text: string to bbe checked
 * Return: flag
 */
int is_palindrome(char * text)
{
	int i = 0;
	int j = _strlen(text) - 1;
	int flag;

	while (j > i)
	{
		if (text[i++] != text[j--])
		{
			flag = 0;
			break;
		}
		flag = 1;
	}
	return (flag);
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
int main()
{
	int flag;
	char *text;

	text = "abba";
	flag = is_palindrome(text);

	if (flag == 0)
		printf("%s, Is not palindrome\n", text);
	if (flag == 1)
		printf("%s, Is palindrome\n", text);
	return (0);
}
