#include "main.h"

#define MAXSIZE 1024
/**
 * main - the entry point
 * @argc: arguement count
 * @argv: argument vector
 * Return: returns 0 if success
 */

int main(int argc, char *argv[])
{
	int fdto, fdfr, status, dest;
	char buf[MAXSIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdfr = open(argv[1], O_RDONLY);
	if (fdfr == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fdto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	/*status = read(fdfr, buf, MAXSIZE);*/
	while ((status = read(fdfr, buf, MAXSIZE)) > 0)
	{
		if (fdto < 0 || (write(fdto, buf, status) != status))
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (status == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	status = close(fdfr);
	if (status == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdfr);
		exit(100);
	}
	dest = close(fdto);
	if (dest == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	return (0);
}
