#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int);

long int NUM = 600851475143;

int main(void){
    for(int i=abs(sqrt(NUM)); i>0; i--){
        if(is_prime(i)==1 && NUM%i==0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}

int is_prime(int n){
    if(n==2 || n==3) return 1;
    if(n<=1 || n%2==0 || n%3 == 0) return 0;
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0||n%(i+2)==0) return 0;
    }
    return 1;
}
