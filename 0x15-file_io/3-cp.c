#include"main.h"
#include<stdio.h>
#include<stdlib.h>
char *buffer(char *name_of_file);
void close_file(int name_of_file);
/**
 * buffer - creates array for name_of file
 * @name_of_file:characters to create buffer for
 *
 * Return:0
 */
char *buffer(char *name_of_file)
{
	char *betty;
	betty = malloc(sizeof(char) * 1024);
	if (betty == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name_of_file);
			exit(99);
	}
	return(betty);
}
void close_file(int name_of_file)
{
	int a;
	a = close(name_of_file);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close name_of_file %d\n", name_of_file);
		exit(100);
	}
}
int main(int argc, char *argv[])
{
	int src, des, read_1, write_2;
	char *betty;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	betty = buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	read_1 = read(src, betty, 1024);
	des = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while(read_1 > 0)
	{
		if (src == -1 || read_1 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(betty);
			exit(98);
		}
		write_2 = write(des, betty, read_1);
		if(des == -1 || write_2 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(betty);
			exit(99);
		}
		read_1 = read(src, betty, 1024);
		des = open(argv[2],O_WRONLY | O_APPEND);
	}
	free(betty);
	close_file(src);
	close_file(des);

	return (0);
}

