//Remove Duplicates Items In An Array
#include <stdio.h>   
int main ()  
{   
    int arr[20],i,j,k,size;        
    printf(" Define Number of Elements in an array: ");  
    scanf(" %d",&size);      
    printf(" \n Enter %d Elements of an array: \n ",size);    
    for(i=0;i<size;i++)  
    {  
        scanf("%d",&arr[i]);  
    }       	
    for(i=0;i<size;i++)  
    {  
        for(j=i+1;j<size;j++)  
        {   						
            if(arr[i]==arr[j])  
            {  
                for(k=j;k<size-1;k++)  
                {  
                    arr[k]=arr[k+1];  
                }  
                size--;     
                j--;      
            }  
        }  
    } 
    printf(" \n Array after deletion of the duplicate elements: ");   
    for(i=0;i<size;i++)  
    {  
        printf(" %d  ",arr[i]);  
    }  
}  
