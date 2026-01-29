#include<stdio.h>
int main()
{
    int i,f,fact=1;
    printf("Enter A Number: ");
    scanf("%d",&f);
    if(f<0)
    {
        printf("Negative Integer factorial not possible.");
    }
    else
    {
        for(i=1;i<=f;++i)
        {
            fact*=i;
        }
    printf("factorial= %d",fact);

    }
    
}
