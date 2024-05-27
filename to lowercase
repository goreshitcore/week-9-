
#include <stdio.h>

char to_lowercase(char ch) {
    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        // Convert uppercase to lowercase by adding 32 to the ASCII value
        return ch + 32;
    } else {
        // Return the character unchanged if it's not uppercase
        return 0;
    }
}

int main() {
    char uppercaseChar, lowercaseChar;

    printf("Please input a letter:\n");
    scanf("%c", &uppercaseChar);

    lowercaseChar = to_lowercase(uppercaseChar);

    printf("%c's lowercase is %c\n", uppercaseChar, lowercaseChar);

    return 0;
}
