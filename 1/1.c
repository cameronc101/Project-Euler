#include <stdio.h>

int is_multiple(int);

int main(void){
	int sum;
	for(int i=1; i<1000; i++){
		if(is_multiple(i)==1){
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}

int is_multiple(int num){   
	if(num%3==0 || num%5==0){
		return 1;
	} else{
		return 0;
	}
}
