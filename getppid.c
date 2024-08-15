#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	__pid_t my_ppid;

	my_ppid = getppid();

	printf("%u\n", my_ppid);
	return (0);
}
