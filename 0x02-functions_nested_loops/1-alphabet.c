#include<unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	void print_alphabet(void)
{
        int A;
        for(A = 'a'; A <= 'z'; A++);
        _putchar(A);
}

	print_alphabet();
	return (0);
}
