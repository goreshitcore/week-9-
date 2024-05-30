#include <stdio.h>
void print_quadratic(int a, int b, int c);
int main(void) {
    int a, b, c;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);
    
    print_quadratic(a,b,c);

}
void print_quadratic(int a, int b, int c) {
    
    printf("%dx^2 ", a);
    
    if (b >= 0)
    {
        printf("+ %dx ", b);
    }
    else
    {
        printf("- %dx ", -b);
    }
    
    if (c >=0)
    {
        printf("+ %d", c);
    }
    else
    {
        printf("- %d", -c);
    }
}
