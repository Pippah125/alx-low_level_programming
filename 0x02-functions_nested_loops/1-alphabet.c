#include<unistd.h>
#include "main.h"
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void);
{
        char b;
        for(b = 'a'; b <= 'z'; b++)
	{
             _putchar(b);
	}
}

