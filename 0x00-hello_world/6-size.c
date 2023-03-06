#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 int Char;
        Char=sizeof(char);
        int INT;
        INT=sizeof(int);
        int LongInt;
        LongInt=sizeof(long int);
        int LLInt;
        LLInt=sizeof(long long int);
        int FLOAT;
        FLOAT=sizeof(float);
        printf("Size of a char: %d bytes(s)\n", Char );
        printf("Size of an int : %d bytes(s)\n",INT);
        printf("Size of a long int: %d bytes(s)\n",LongInt);
	printf("Size of a long long int: %d bytes(s)\n",LLInt);
	printf("Size of a long long int: %d bytes(s)\n",FLOAT);
        return(0);
}

