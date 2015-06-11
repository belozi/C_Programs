#include <cs50.h>
#include <stdio.h>

int main(void)
{
    void build(int row);
    
    int height = 0;
    while(height <= 0 || height > 23)
    {
        printf("Please enter the height of your pyramid. It must be a non-negative number that is no greater than 23: ");
        height = GetInt();
    }
    
    //builds the half-pyramid
    build(height);
    
}

//build method
void build(int top)
{
    int block = 2;
    for(int i = top; i > 0; i--)
        {
           for(int j = top - 1; j > 0; j--)
                {
                    printf(" ");
                    
                }
           for(int n = block; n > 0; n--)
                {
                    printf("X");
                }
           top--;
           block++;
           printf("\n");
        }
}
