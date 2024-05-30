#include <stdio.h>


void print_assessments(int learning_outcome);

int main() {
    int learning_outcome;


    printf("Learning Outcome?");
    scanf("%d", &learning_outcome);

    // Call the function to print the assessments
    print_assessments(learning_outcome);

    return 0;
}

// Function definition
void print_assessments(int learning_outcome) {
    // Check if the learning outcome is within the valid range
    if (learning_outcome < 1 || learning_outcome > 10) {
        printf("\nInvalid Learning Outcome.\n");
        return;
    }

    // Print the assessments that cover the learning outcome
    printf("\n\n");
    if (learning_outcome >= 1 && learning_outcome <= 10) {
        printf("Reporting Journal\n");
    }
    
    if (learning_outcome >= 1 && learning_outcome <= 6) {
        printf("Practical Test 1\n");
    }
    
    if (learning_outcome >= 1 && learning_outcome <= 8) {
        printf("Practical Test 2\n");
    }
    
    if (learning_outcome >= 1 && learning_outcome <= 9) {
        printf("Practical Test 3\n");
    }
    
    if (learning_outcome >= 1 && learning_outcome <= 10) {
        printf("Final Practical Exam\n");
    }
}
