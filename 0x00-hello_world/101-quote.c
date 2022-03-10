#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/* 
 * main - Entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	int fd[2];
	char sbuf1[58] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
	char sbuf2[58];

	/* use open function to access the buffer*/
	fd[0] = open("task8.txt", O_RDWR | O_CREAT);
	fd[1] = open("task8.txt", O_RDWR | O_CREAT);

	write(fd[0], sbuf1, strlen(sbuf1));
	write(1, sbuf2, read(fd[1], sbuf2, 58));

	close(fd[0]);
	close(fd[1]);

	return (1);
}
