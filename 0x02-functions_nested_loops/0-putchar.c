#include<unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	char A;
	A = '_';
	_putchar(A);
	return(0);
}
