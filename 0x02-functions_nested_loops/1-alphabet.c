#include<unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int A;
	for(A = 'a'; A <= 'z'; A++);
	_putchar(A);
}
int main(void)
{
	print_alphabet();
	return (0);
}
