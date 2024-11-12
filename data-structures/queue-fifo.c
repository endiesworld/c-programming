#include <stdlib.h>

const int CAPACITY = 50; 

typedef struct{
    char name[100];
    int age;
} person;

typedef struct{
    person people[CAPACITY];
    int size;
} queue;