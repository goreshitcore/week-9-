#include <stdio.h>

int is_digit(char input);

int main(void) {
    char input;
    scanf(" %c", &input);
    printf("> %d", is_digit(input));


}

int is_digit(char input) {
    
    if ( input >= '0' && input <= '9') return 1;
    else return 0;
}
