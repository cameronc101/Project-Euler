#include <stdio.h>

int main(void){
	int a = 1, b = 2;
	int c;
	int sum = 2;
	do{
	    c = a + b;
	    a = b;
	    b = c;
	    if(c%2==0) sum += c;
	} while(c<4000000);
	printf("%d", sum);
	return 0;
}
