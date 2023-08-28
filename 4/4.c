#include <stdio.h>

int is_palindrome(int);

int main(void){
    int product;
    int result;
    for(int i=999; i>100; i--){
        for(int j = i; j>100; j--){
            product = i*j;
            if(is_palindrome(product) && product>result){
                result = product;
            }
        }
    }
    printf("\n%d", result);
    return 0;
}

int is_palindrome(int n){
    int remainder, reversed = 0;
    int number = n;
    while(n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if(number == reversed) return 1;
    else return 0;
}
