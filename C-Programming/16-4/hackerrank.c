#include<stdio.h>
int main()
{
    int a;
    int sum=0,plus=0;
    scanf("%d",&a);
    int a1[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(i==j)
            {
                sum+=a1[i][j];
            }
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=2;j>=0;j--)
        {
            printf("%d ",a1[i][j]);
        }
    }
   
    return 0;
}