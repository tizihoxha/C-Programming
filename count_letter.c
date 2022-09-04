#include "c_programming.h"

/**
 *
 *
 *
 */
int count_letter(char * text, char n)
{
	int i, count = 0;

	for (i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == n)
			count++;
	}
	return (count);
}

int main()
{
	char text[1000];
	int n;
	printf("Enter string here:\n ");

	scanf("%s", text);

	getchar();

	printf("Character to be searched:\n ");
	n = getchar();
	printf("Character '%c' is found %i times \n", n, count_letter(text, n));
	return (0);
}
