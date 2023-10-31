#include"main.h"
/**
 * append_text_to_file - adds text_content to the end of filename
 * @filename:name of file
 * @text_content:string to attach to file end
 *
 * Return:0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_1, write_2, len;

	len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	open_1 = open(filename, O_WRONLY | O_APPEND);
	write_2 = write(open_1, text_content, len);
	if (open_1 == -1 || write_2 == -1)
	{
		return (-1);
	}
	close(open_1);
	return (1);
}
