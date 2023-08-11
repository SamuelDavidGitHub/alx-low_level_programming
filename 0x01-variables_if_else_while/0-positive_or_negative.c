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
	if (n > 0){
	  printf("N is a POSITIVE NUMBER")
	}
	if (n ==0 ){
	  printf("N is Zero")
	} else
	{ 
		printf("N is NEGATIVE")
	}

	printf(" ")
	return (n);
}








