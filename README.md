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
    A sequence of values in memory in the same data type.
    int my_array[5];
```

### String

``` Bash
    A sequence of character in memory. Every string array has a '\0' character that indicates the end of the string

    char my_array[5];
```

### Command Line Input (CLI)

```bash
    int main(int argc, char *argv[]){}
    int main(int argc, char **argv){}

    int argc: This parameter (argument count) indicates the number of command-line arguments passed to the program, including the name of the program itself.

    char **argv: This parameter (argument vector) is an array of strings (character pointers), where each string is one of the command-line arguments. argv[0] is typically the name of the program, argv[1] is the first argument, argv[2] is the second argument, and so on.
    >./my_program arg1 arg2 arg3

```
