#include<stdio.h>

/**
 * main - function for print size
 *
 * return always 0
 */

int main() {
    char char_type;
    int int_type;
    long int long_int_type;
    long long int long_long_int_type;
    float float_type;

    printf("Size of a char: %zu byte\n", sizeof(char_type));
    printf("Size of an int: %zu bytes\n", sizeof(int_type));
    printf("Size of a long int: %zu bytes\n", sizeof(long_int_type));
    printf("Size of a long long int: %zu bytes\n", sizeof(long_long_int_type));
    printf("Size of a float: %zu bytes\n", sizeof(float_type));
    return 0;
}
