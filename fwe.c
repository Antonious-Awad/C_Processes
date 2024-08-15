#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t child_pid = 1;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	int count = 0;
	int status;

	while (count < 4 && (child_pid != 0))
	{
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error creating child: ");
			return (1);
		}
		wait(&status);
		count++;
	}

	if (child_pid == 0)
	{
		printf("----------------------------\n");
		printf("I'm child %d\n", count);
		printf("----------------------------\n");
	}
	else
	{
		printf("----------------------------\n");
		printf("I'm father\n");
		printf("----------------------------\n");
	}

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
		return (1);
	}

	return (0);
}
