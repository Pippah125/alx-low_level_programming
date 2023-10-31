#include"main.h"
#include<stdlib.h>
/**
 *read_textfile- reads filename to the stdout
 *@filename:file to  be read
 *@letters:number of letters to be printed out
 *
 *Return:0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_1, read_2, write_3;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	open_1 = open(filename, O_RDONLY);
	read_2 = read(open_1, buffer, letters);
	write_3 = write(STDOUT_FILENO, buffer, read_2);
	if (open_1 == -1 || read_2 == -1 || write_3 == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open_1);
	return (write_3);
}

