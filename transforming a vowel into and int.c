#include <stdio.h>
int is_vowel(char input);

int main(void)
{
    char input;
    printf("> ");
    scanf(" %c", &input);
    
    printf("%d", is_vowel(input));
    return 0;
}

int is_vowel(char input) {
    
    if ( input == 'a' || input == 'A') {
        return 1;
    }
    
    else if ( input == 'E' || input == 'e' ) {
        return 1;
    }
    
    else if ( input == 'I' || input == 'i' ) {
        return 1;
    } 
    
    else if ( input == 'O' || input == 'o' ) {
        return 1;
    }
    
    else if ( input == 'U' || input == 'u' ) {
        return 1;
    }
    
    
    
    else {
        return 0;
    }
    
 
}
