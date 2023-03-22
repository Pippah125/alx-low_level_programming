#include<unistd.h>
int main(void)
{
	int _putchar(char c)
{
	return (write(1, &c, 1));
}
	char A;
	A = '_';
	_putchar(A);
	return(0);
}
