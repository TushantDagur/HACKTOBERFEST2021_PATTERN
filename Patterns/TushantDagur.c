#include<stdio.h>

int main(){
    for (int rows = 10; rows >= 0; rows--) 
    {
        for (int space = 10; space > 10 - rows; space--) 
        {
            printf(" ");
        }
        for (int star = 0; star < 10 - rows; star++) 
        {
            printf("* ");
        }
        for (int space = 10; space > 10 - rows; space--) 
        {
            printf(" ");
        }
        for (int space = 10; space > 10 - rows; space--)
        {
            printf(" ");
        }
        for (int star = 0; star < 10 - rows; star++)
        {
            printf("* ");
        }
        for (int space = 10; space > 10 - rows; space--)
        {
            printf(" ");
        }
        printf("\n");
    }
    // Down pyramid
    for (int i = 10; i > 0; i--)
    {
        for (int space = 0; space < 10 - i; space++)
        {
            printf("  ");
        }
        for (int star = i * 2; star > 0; star--)
        {
            printf("* ");
        }

        printf("\n");
    }
}