#include <stdio.h>

int lcm(int a, int b);

int main(void){
    int result = 1;
    for(int i=1; i<=20; i++){
        result = lcm(i,result);
    }
    printf("%d", result);
    return 0;
}

int lcm(int a, int b){
    int lcm;
    int greater;
    if(a>b){
        greater = a;
    } else{
        greater = b;
    }
    while(1){
        if(greater % a == 0 && greater % b == 0){
            lcm = greater;
            break;
        }
        greater++;
    }
    return lcm;
}
