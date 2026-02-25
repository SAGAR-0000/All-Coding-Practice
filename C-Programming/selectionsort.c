#include<stdio.h>
int main(){
    int n;
    printf("Enter Number Of values: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=1;i--){
        int maxIdx=i;
        for(int j=0;j<i;j++){
            if(a[j]>=a[maxIdx])
                maxIdx=j;
            if(i!=maxIdx){                //swap without temp variable
                a[i]=a[i]+a[maxIdx];
                a[maxIdx]=a[i]-a[maxIdx];
                a[i]=a[i]-a[maxIdx];
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}