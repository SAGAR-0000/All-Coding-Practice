#include<stdio.h>
void main()
 {
    int m,n;
    float mid=0;
    printf("Enter Size of 1st Array: ");
    scanf("%d",&m);
    printf("Enter Size of 2nd Array: ");
    scanf("%d",&n);
    int a[m],b[n],c[m+n],i;
    printf("Enter Elements in 1st Array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Elements in 2nd Array: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&b[i]);
    }
    printf("\nElements of Array After Merge: ");
    for(i=0;i<m;i++)
    {
        c[i]=a[i];
        c[i+m]=b[i];
    }
    for(i=0;i<m+n;i++)
    {
    printf("%d ",c[i]);
    }
    for(i=0;i<m+n;i++)
    {
    mid+=c[i];
    }
    printf("\nMedian :\n%.2f",mid/(m+n));
    return 0;
 }