#include <stdio.h>
#include <math.h>

int main(void){
    int sum_of_squares;
    int sum_of_nats;
    int square_of_sum;
    int result;
    for(int i=0; i<=100; i++){
        sum_of_squares += pow(i,2);
    }
    for(int i=0; i<=100; i++){
        sum_of_nats += i;
    }
    square_of_sum = pow(sum_of_nats,2);
    result = square_of_sum - sum_of_squares;
    printf("%d", result);
    return 0;
}
