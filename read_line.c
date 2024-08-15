#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @ac: arg count
 * @av: arg values
 * Return: 0
 */

int main(int ac, char **av)
{
	char *buffer = malloc(sizeof(char) * 1024);
	size_t len = 1024;

	char *terminate[2] = {"EOF", "end-of-file"};

	while (1)
	{
		printf("$ ");
		int x = getline(&buffer, &len, stdin);

		if (strcmp(buffer, terminate[0]) == 10 || strcmp(buffer, terminate[1]) == 10 || x == -1)
		{
			printf("Process Terminated\n");
			break;
		}
		printf("%s\n", buffer);
	}

	return (0);
}