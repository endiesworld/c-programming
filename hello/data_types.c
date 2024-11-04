#include <stdio.h>

int main(void) {

    int data_a = 9 ; // data stored in 32bit memory
    long data_b = 2 ; // data stored in 64

    float data_c = 9.1 ; // data stored in 32bit memory
    double data_d = 9.2 ; // data stored in 64

    char data_e = 'A' ;  // data stored in 32bit memory. C does not support string data type like Python

    int result = data_a / data_b ;
    float correct_result = (float)data_a / data_b;
    printf("This will print an integer/whole number istead of a float or double %i\n", result );
    printf("This will print an integer/whole number istead of a float or double %d\n", (data_a / data_b));

    printf("This will print float or double but the value will be wrong %f\n", (float) (data_a / data_b));
    printf("This will print correct value float or double %f\n", correct_result);
    printf("This will print correct value float or double in 2 decimals %0.2f\n", correct_result);
}