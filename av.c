#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * @ac: arg count
 * @av: arg values
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
		printf("%s\n", av[i++]);
	return (0);
}
