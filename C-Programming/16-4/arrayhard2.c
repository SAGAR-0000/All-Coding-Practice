#include<stdio.h>
int main()
{
    int m,a=0,b=0;
    printf("Enter Size of Array: ");
    scanf("%d",&m);
    int a1[m];
    printf("Enter Elements in Array: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(a1[i]>a)
        {
            a=a1[i];
            b=i;
        }
    }
    printf("%d",b);
    return 0;
}