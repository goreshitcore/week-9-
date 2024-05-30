#include <stdio.h>

void draw_ascii_box(char c, char h, char v, int width, int height);
void draw_horizontal(char h, char c, int width);
void draw_vertical(char c, char v, int width, int height);

int main(void) {
    // char corner, horizontal, vertical
    char h, v, c;
    int width, height;
    scanf(" %c", &h);
    scanf(" %c", &v);
    scanf(" %c", &c);
    scanf("%d", &width);
    scanf("%d", &height);
    
    draw_ascii_box(c,h,v, width, height);
    return 0;
}


void draw_ascii_box(char c, char h, char v, int width, int height) {
    draw_horizontal(h, c, width);
    draw_vertical( c, v, width, height);
    draw_horizontal(h, c, width);
}

void draw_horizontal(char h, char c, int width)
{
    // printing corners
    printf("%c", c);
    //horizontal symbols
    for ( int i = 0; i < ( width - 2); i++ ) 
    {
        printf("%c", h);
    }
    printf("%c\n", c);
}

void draw_vertical(char c, char v, int width, int height)
{
    for ( int j = 0; j < ( height - 2); j++ ) {
           
    printf("%c", v);    
   
    for ( int k = 0; k < ( width - 2); k++)
    {
        printf(" ");
    }
    // vertical corner symbol
    printf("%c\n", v); 
    }


}


