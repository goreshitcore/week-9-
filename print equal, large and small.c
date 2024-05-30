#include <stdio.h>

void print_equal(int a, int b);
void print_largest(int a, int b);
void print_smallest(int a, int b);
int main(void) {
    int a, b;
    printf("Please enter the first number:\n");
    scanf("%d", &a);
    printf("Please enter the second number:\n");
    scanf("%d", &b);
    print_equal(a,b);
    print_largest(a,b);
    print_smallest(a,b);
}

void print_equal(int a, int b) {
    if ( a == b) {
        printf("Equal [%d vs %d]\n", a, b);
    }
    else {
        printf("Not Equal [%d vs %d]\n", a, b);
    }
}

void print_largest(int a, int b) {
    if ( a > b ) {
        printf("%d is largest [%d vs %d]\n", a, a, b);
    }
    else {
        printf("%d is largest [%d vs %d]\n", b, a, b);
    }
}

void print_smallest(int a, int b) {
    if ( a < b ) {
        printf("%d is smallest [%d vs %d]\n", a, a, b);
    }
    else {
        printf("%d is smallest [%d vs %d]\n", b, a, b);
    }
}
