#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x14-bit_manipulation
File: 0-binary_to_uint.c
  
1. 1
mandatory
Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators
julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
