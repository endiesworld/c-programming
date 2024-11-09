# C-Programming Language

## Data types in C

``` Bash
> bool  1-byte
> int   4-bytes
> long  8-bytes
> float 4-bytes
> double 8-bytes
> char   1-byte

```

### Arrays

``` Bash
# A sequence of values in memory in the same data type.
> int my_array[5];

# In C, there is no built-in function to directly get the length of an array, as arrays in C do not store their own size. However, you can determine the length of a statically allocated array (one with a fixed size) using the sizeof operator.
> int arr[] = {1, 2, 3, 4, 5};
> int length = sizeof(arr) / sizeof(arr[0]);
```

### String

``` Bash
# A sequence of character in memory. Every string array has a '\0' character that indicates the end of the string

> char my_array[5];
> char *my_string = "Emmanuel"; // Since we can use 'char *' to define what a string should be, we can then formalise it using the 'typeof' operator to formalise it.

# Recall that to define a user data structure/type say 'person' we do this:
> typedef struct { 
    char *name;
    char *sex;
    int age;
} person;
# Which means that we can easily do the below:
> person people[5] // That is an array of 5 people with a person property

# Now we can do
> typeof char * string ; // This formally define a string data type, which enables the bellow:
> string my_name = "Emmanuel"; 
```

### Command Line Input (CLI)

```bash
> int main(int argc, char *argv[]){}
> int main(int argc, char **argv){}

# int argc: This parameter (argument count) indicates the number of command-line arguments passed to the program, including the name of the program itself.

# char **argv: This parameter (argument vector) is an array of strings (character pointers), where each string is one of the command-line arguments. argv[0] is typically the name of the program, argv[1] is the first argument, argv[2] is the second argument, and so on.
> ./my_program arg1 arg2 arg3

```

### Pointers and Addresses in C

```bash
# In C, pointers are variables that store the memory address of another variable. Pointers are a powerful feature of C, enabling dynamic memory management, array manipulation, and the ability to pass large structures or arrays efficiently to functions.

# Basic Concepts
# Memory Address: Every variable in C is stored at a specific location in memory, which is represented as an address (a number that points to the variable's location in memory).

# Pointer: A pointer is a variable that holds the memory address of another variable. It is declared using the * symbol.

> int *ptr;  // A pointer to an integer
> int x = 10;
> int *ptr = &x;  // Pointer to x (stores address of x)
> printf("%d", *ptr);  // Dereference ptr to get the value of x (10)
> printf("Address of x: %p", ptr);  // Prints the address of x

```
