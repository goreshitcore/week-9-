#include <stdio.h>

int calculate_pizza_share(int number_of_people);

int main(void)
{
	int input;

    
	printf("How many people? \n");
	scanf("%d", &input);
    if ( input > 0 ) {
        
    printf("%d people get %d slice(s) each.\n", input, calculate_pizza_share(input));
    
    }
    
    else {
        printf("Error");
    }

	return 0;
}

int calculate_pizza_share(int number_of_people)
{
	return 8 / number_of_people;
}
