include "main.h"

/**
 * main - test code
 *
 * Return: Success 0.
 */

int main(void)
{
	char *str = NULL;
	size_t len = 0;

	printf("$: ");
	getline(&str, &i, stdin);
	printf("%s: Yaay!! you wrote your first command", str);

	return (0);
}

