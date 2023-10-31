#include"main.h"
/**
 * create_file-creates file with name filename and append text content to it
 * @filename:name of file  to be created
 * @text_content:content to be added to file name
 *
 * Return:0
 */
int create_file(const char *filename, char *text_content)
{
	int open_1, write_2, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	open_1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_2 = write(open_1, text_content, len);
	if (open_1 == -1 || write_2 == -1)
	{
		return (-1);
	}
	close(open_1);
	return (1);
}
