//Insert An Element Desired or Specific Position In An Array
#include <stdio.h>
int main()
{
    int arr[50]={0};
    int i,x,pos,n=10;
    for(i=0; i<10;i++){	
        arr[i]=i+1;
	}
	for(i=0;i<n;i++)
    {	
	    printf("%d ",arr[i]);
	}
	printf("\n");
    printf("Enter an element to Insert in array: ");
    scanf("%d",&x);
    printf("Enter Position of element to add in array: ");
    scanf("%d",&pos);
    n++;
    for(i=n-1;i>=pos;i--)
    {	
	    arr[i]=arr[i-1];
	}
	arr[pos-1]=x;
    for(i=0;i<n;i++)
        {
		printf("%d ",arr[i]);
    	}
	printf("\n");
}
