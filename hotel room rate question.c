#include <stdio.h>

void print_bill(int num_nights, float room_rate, float minibar);
float compute_bill(int num_nights, float room_rate, float minibar);

int main(void)
{
    int number_of_nights;
    float room_rate;
    float minibar;
    
    printf("Number of nights? Room rate? Minibar?\n");
    scanf("%d", &number_of_nights);
    scanf("%f", &room_rate);
    scanf("%f", &minibar);
    
    print_bill(number_of_nights, room_rate, minibar);
    return 0;
}

void print_bill(int num_nights, float room_rate, float minibar)
{
    printf("Nights:    %d\n", num_nights);
    printf("Room rate: $");
    
    if (room_rate < 100)
        {
            printf(" ");
        }
    
    printf("%.2f\n", room_rate);
    
    printf("Minibar:   $");
    if (minibar < 100)
        {
            printf(" ");
        }
    printf("%.2f\n", minibar);
    printf("-----------------\n");
    printf("Total:     $%.2f", compute_bill(num_nights, room_rate, minibar));
}

float compute_bill(int num_nights, float room_rate, float minibar)
{
    return (num_nights * room_rate) + minibar;
}
