#include<stdio.h>
int main()
{
	int i,j,k,size,array[20];
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	printf("Enter %d Elements Of Array: \n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d  ",array[i]);
	}


}

