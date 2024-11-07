#include <stdio.h>

// Constant
const int N = 5;

float average(int len, float array[]) ;

int main(void){
    float scores[N];

    for(int i=0; i<N; i++){
        printf("Enter score: ");
        scanf(" %f",&scores[i]);
    }

    float avr = average(N, scores) ;

    printf("The average of the scores is: %f\n", avr);
}

float average(int len, float scores[]){
    float sum = 0;

    for(int i = 0; i<len; i++){
        sum += scores[i];
    }

    float avr = sum /(float) len;

    return avr ;
}