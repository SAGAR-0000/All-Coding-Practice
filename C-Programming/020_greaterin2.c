#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the two numbers \n");
    scanf("%d%d",&x,&y);
    if(x>y)
    { 
        printf("x is greater than y\n");
    }
    else
    {
        printf("y is greater than x\n");
    }
}
