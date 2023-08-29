#include <stdio.h>

int is_prime(int n);

int main(void){
    int n = 0;
    int i = 0;
    while(1){
        if(is_prime(i)==1) n++;
        if(n==10001) break;
        i++;
    }
    printf("%d",i);
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
