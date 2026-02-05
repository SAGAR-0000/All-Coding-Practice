#include<stdio.h>
int main()
{
    int m,a,b=0,st,end=0;
    printf("Enter Size of Array: ");
    scanf("%d",&m);
    int a1[m];
    printf("Enter Elements in Array: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter Target: ");
    scanf("%d",&a);
    for(int i=0;i<m;i++)
    {
        if(a1[i]==a)
        {
            st=i;
            break; 
        } 
        else{
            st=-1;
        }
    }
    for(int i=m-1;i>=0;i--)
    {
        if(a1[i]==a)
        {
            end=i;
            break; 
        } 
        else{
            end=-1;
        }
    }
    printf("[%d,%d]",st,end);
    return 0;
}