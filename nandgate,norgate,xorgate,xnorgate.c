#include <stdio.h>

int nand_gate(int a, int b);
int nor_gate(int a, int b);
int xor_gate(int a, int b);
int xnor_gate(int a, int b);


int nand_gate(int a, int b) {
    return !(a && b);
    // only one input should be true
    // both input true = false output
}
int nor_gate(int a, int b) {
    return !(a || b);
    //both input should be the same
    
}
int xor_gate(int a, int b) {
    return (a && !b) || (!a && b);
    // exclusivly one input should be true
    
}
int xnor_gate(int a, int b) {
    return (a&&b) || (!a && !b);
    //both input should be the same
    
}


int main(void) {
    printf("a b           a NAND b    a NOR b    a XOR b    a XNOR b\n");
    printf("0 0           %d           %d          %d          %d\n", nand_gate(0, 0), nor_gate(0, 0), xor_gate(0, 0), xnor_gate(0, 0));
    printf("0 1           %d           %d          %d          %d\n", nand_gate(0, 1), nor_gate(0, 1), xor_gate(0, 1), xnor_gate(0, 1));
    printf("1 0           %d           %d          %d          %d\n", nand_gate(1, 0), nor_gate(1, 0), xor_gate(1, 0), xnor_gate(1, 0));
    printf("1 1           %d           %d          %d          %d", nand_gate(1, 1), nor_gate(1, 1), xor_gate(1, 1), xnor_gate(1, 1));

    return 0;
}
