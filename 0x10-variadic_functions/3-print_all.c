#include"variadic_functions.h"
#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
/**
 * printf_all - prints arguments given to it
 * @format: The format to print
 *
 * Return:0
 */
void put_char(va_list arg);
void put_int(va_list arg);
void put_float(va_list arg);
void put_string(va_list arg);
void put_char(va_list arg)
{
	char betty;
	betty = va_arg(arg, int);
	printf("%c", betty);
}
void put_int(va_list arg)
{
	int number;
	number = va_arg(arg,int);
	printf("%d",number);
}
void put_float(va_list arg)
{
	float number;
	number = va_arg(arg,double);
	printf("%f", number);
}
void put_string(va_list arg)
{
	char *string;
	string = va_arg(arg, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s",string);
}
void print_all(const char * const format, ...)
{
	va_list args;
	int a =0, b=0;
	char *divide = "";
	put  func[] ={
		{"c", put_char}, 
		{"i", put_int},
		{"f", put_float},
		{"s", put_string}
	};
	va_start(args,format);
	while (format && (*(format + a)))
	{
		b = 0;
		while (b < 4 && (*(format + a) != *(func[b].sign)))
			b++;
		if (b < 4)
		{
			printf("%s", divide);
			func[b].put(args);
			divide = ",";
		}
		a++;
	}
	printf("\n");
	va_end(args);
}
