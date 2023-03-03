#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0) {
		printf("%d is a postive number\n",n);
	}

	else if	("n=0") {
		printf("rand() - RAND_MAX / 2 is zero \n"); 
	}
	else {
		printf("rand() - RAND_MAX / 2 is negative \n");
	}
		
	return (0);
}
