#include <stdio.h>
void draw_inverted_triangle(int height);
int main()
{
    int height;
    printf("enter height:\n");
    scanf("%d", &height);
    
    draw_inverted_triangle(height);
}

void draw_inverted_triangle(int height)
{
    int width = height * 2;
    int spaces_before = 0;
    int spaces_between = (height - 1) * 2;
    
    for (int i = 0; i < width; i++)
        {
            printf("_");
        }
    printf("\n");
    
    for (int j = 0; j < height; j++)
        {
            for(int k = 0; k < spaces_before; k++)
                {
                    printf(" ");
                }
                
            printf("\\");
            
            for(int l = 0; l < spaces_between; l++)
                {
                    printf(" ");
                }
                
            printf("/\n");
            
            spaces_before++;
            spaces_between -= 2;
            
        }
    
    
}
