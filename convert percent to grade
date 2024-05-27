#include <stdio.h>

char convert_percent_to_grade(float percent);

int main(void) {
    float percent;
    printf("What's the percentage:\n");
    scanf("%f", &percent);
    char grade = convert_percent_to_grade(percent);
    printf("%.2f%% is %c Grade\n", percent, grade);
    
    return 0;
}

char convert_percent_to_grade(float percent) {
    if (percent >= 80) {
        return 'A';
    } else if (percent >= 65) {
        return 'B';
    } else if (percent >= 50) {
        return 'C';
    } else if (percent >= 0) {
        return 'D';
    } else {
        return 'I'; 
    }
}
